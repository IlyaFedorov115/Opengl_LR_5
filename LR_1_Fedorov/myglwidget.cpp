#include "myglwidget.h"
//#include "ui_myglwidget.h"
#include <iostream>
MyGlWidget::MyGlWidget(QWidget *parent) :
    QGLWidget(parent)
    //ui(new Ui::MyGlWidget)
{
    //resize(500,300);
    xRot = 0;
    yRot = 0;
    zRot = 0;
    currentPrimitive = GL_POINTS;
    countDots = 5;
    //ui->setupUi(this);
}

static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360)
        angle -= 360 * 16;
}


const char* MyGlWidget::loadShaderFile(const char *filePath)
{
    std::string shaderCode;
    std::ifstream shaderFile;
    try
    {
        shaderFile.open(filePath);             // Открыть файл
        std::stringstream ShaderStream;

        ShaderStream << shaderFile.rdbuf();   // считывание в поток
        shaderFile.close();        // зкрыть файл
        shaderCode = ShaderStream.str();       // из потока в строку
    }
    catch (std::ifstream::failure& e)
    {
        std::cout << "ERROR! FILE NOT SUCCESFULLY READ" << std::endl;
    }
    const char* resShaderCode = shaderCode.c_str();
    return resShaderCode;
}


GLuint MyGlWidget::initShader(const char *filePath, GLuint type)
{

    std::string shaderCode;
    std::ifstream shaderFile;
    try
    {
        shaderFile.open(filePath);             // Открыть файл
        std::stringstream ShaderStream;

        ShaderStream << shaderFile.rdbuf();   // считывание в поток
        shaderFile.close();        // зкрыть файл
        shaderCode = ShaderStream.str();       // из потока в строку
    }
    catch (std::ifstream::failure& e)
    {
        std::cout << "ERROR! FILE NOT SUCCESFULLY READ" << std::endl;
    }
    const char* shader_txt = shaderCode.c_str();

   //const char* shader_txt = MyGlWidget::loadShaderFile(filePath);

    GLuint shader = glCreateShader(type);
    glShaderSource(shader, 1, &shader_txt, NULL);
    glCompileShader(shader);

    int success;
    GLchar log[2000];
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success)
    {
        glGetShaderInfoLog(shader, 2000, NULL, log);
        std::cout << log << std::endl << "Succ" << success;
        close();
    }

    //delete shader_txt;
    //free(shader_txt);
    return shader; // дискриптор шейдера
}


void MyGlWidget::initAllShaders()
{
    GLuint frag = initShader("/home/ilya/OpenGL_labs/Labs/LR_1_OLd/LR_1/LR_1_Fedorov/test_frag.frag", GL_FRAGMENT_SHADER);
    GLuint vert = initShader("/home/ilya/OpenGL_labs/Labs/LR_1_OLd/LR_1/LR_1_Fedorov/test_vert.vert", GL_VERTEX_SHADER);

    GLuint prog = glCreateProgram();
    glAttachShader(prog, frag);
    glAttachShader(prog, vert);
    glLinkProgram(prog);

    int success;
    GLchar log[2000];

    glGetProgramiv(prog, GL_LINK_STATUS, &success);
    if(!success)
    {
        glGetProgramInfoLog(prog, 2000, NULL, log);
        std::cout << log << std::endl;
        close();
    }

    glUseProgram(prog);
}


void MyGlWidget::resizeGL(int width, int height)
{
    int side = qMin(width, height);
    glViewport((width - side) / 2, (height - side) / 2, side, side);
   // glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
   //glOrtho(-2, +2, -2, +2, 1.0, 15.0);
    //glMatrixMode(GL_MODELVIEW);
}


void MyGlWidget::setXRotation(int angle)
{
    std::cout << "Name: " <<angle <<  "Tom" << "\n";
    qNormalizeAngle(angle);
    if (angle != xRot) {
        xRot = angle;
        updateGL();
    }
}

void MyGlWidget::setYRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != yRot) {
        yRot = angle;
        updateGL();
    }
}

void MyGlWidget::setZRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != zRot) {
        zRot = angle;
        updateGL();
    }
}



void MyGlWidget::drawSquare()
{
    float vert[] = {-1,-1,0, 1,-1,0,  1,1,0,  -1,1,0};

    glColor3f(0,0,0);
    glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3, GL_FLOAT, 0, vert);
        glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
    glDisableClientState(GL_VERTEX_ARRAY);
}


void MyGlWidget::initializeGL()
{
    initializeOpenGLFunctions();
    initAllShaders();
    std::cout << "initializeGL" << currentPrimitive<< "\n";
    //glOrtho(-3,3, -3,3, -3,3);
    // glFrustum(-1,1, -1,1, 2,8);

    //glClearColor(0.7f, 1.0f, 0.7f, 0.0f);
    //qglClearColor(Qt::white); // заполняем экран цветом
    //glClear(GL_COLOR_BUFFER_BIT);
    //glEnable(GL_DEPTH_TEST); // задаем глубину проверки пикселей
    //glShadeModel(GL_FLAT); // убираем режим сглаживания цветов
    //glEnable(GL_CULL_FACE); // говорим, что будем строить только внешние поверхности
    //glShadeModel(GL_SMOOTH);

}

bool changeOrtho = 0;

void MyGlWidget::Init()
{
        //glFrustum(-1,1, -1,1, 2,3);

   std::cout << "INIT" <<"\n";

   //glMatrixMode(GL_PROJECTION);
   //glLoadIdentity();

   //glFrustum(-0.1,0.1, -0.1,0.1, 0.2,1000);
  if (!changeOrtho){
      //glLoadIdentity();
       //glOrtho(-10,10, -10,10, -5,5);
       changeOrtho = 1;
       glFrustum(-10,10, -10,10, 2,80);
       glTranslatef(0,0,-3);
  }




   //glMatrixMode(GL_MODELVIEW);
  //glLoadIdentity();

    glEnable(GL_DEPTH_TEST); // задаем глубину проверки пикселей
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

}



void MyGlWidget::paintGL()
{
    std::cout << "paintGL" << xRot << currentPrimitive<< "\n";

    //glClearColor(0.7f, 1.0f, 0.7f, 0.0f);
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    if (!changeOrtho){
            Init();
    }



    //glFrustum(-1,1, -1,1, 2,8);
    //glLoadIdentity();
    //glTranslatef(0.0, 0.0, -10.0);
//    glRotatef(xRot / 16.0, 1.0f, 0.0f, 0.0f);
//    glRotatef(yRot / 16.0, 0.0f, 1.0f, 0.0f);
//    glRotatef(zRot / 16.0, 0.0f, 0.0f, 1.0f);
    //drawGl();
    draw3Dscene();

}


void MyGlWidget::drawScene()
{
    GLfloat pVerts[]= {-0.5f, -0.5f, 0.0f,

                        0.5f,  0.0f, 0.0f,

                       -0.5f , 0.5f, 0.0f};

    GLfloat colors[] = {1,0,0,  0,0,1, 0,1,0};


    glVertexPointer(3, GL_FLOAT, 0, pVerts);
    //glVertexPointer(2, GL_FLOAT, 0, &vertices);
        glColorPointer(3, GL_FLOAT, 0, colors);
        //glColor3ub(255,0,0); // красный
        glDrawArrays(GL_TRIANGLES, 0, 3);
    glDisableClientState(GL_VERTEX_ARRAY);
    glDisableClientState(GL_COLOR_ARRAY);
}


void MyGlWidget::draw3Dscene()
{
    GLfloat vert[] = {1,1,0, 1,-1,0, -1,-1,0, -1,1,0};
    //glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    //glClear(GL_COLOR_BUFFER_BIT);


    glPushMatrix();
    moveView();

    glNormal3f(0,0,1); // вектор нормали для поверхности

    glEnableClientState(GL_VERTEX_ARRAY);
        glVertexPointer(3, GL_FLOAT, 0, vert);

        for (int i = -5; i < 5; i++){
            for (int j = -5; j < 5; j++)
            {
                glPushMatrix();
                    if ((i+j) % 2 == 0) glColor3f(0, 0.5, 0);
                    else glColor3f(1,1,1);
                    glTranslatef(i*2, j*2, 0);
                    glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
                glPopMatrix();
            }
        }

        //glColor3f(0, 0.5, 0);
        //glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
    glDisableClientState(GL_VERTEX_ARRAY);


    glPopMatrix();
}



void MyGlWidget::moveDistance()
{
    glTranslatef(0, 0, -0.03);
    updateGL();
}

void MyGlWidget::moveCloser()
{
    glTranslatef(0, 0, 0.03);
    updateGL();
}


void MyGlWidget::upView()
{
    xAlfa = ++xAlfa > 180 ? 180 : xAlfa;
    updateGL();
}

void MyGlWidget::downView()
{
    xAlfa = --xAlfa < 0 ? 0 : xAlfa;
    updateGL();
}


void MyGlWidget::leftView()
{
    zAlfa++;
    updateGL();
}
void MyGlWidget::rightView()
{
    zAlfa--;
    updateGL();
}


void MyGlWidget::moveView()
{
    glRotatef(-xAlfa,1,0,0);
    glRotatef(-zAlfa, 0, 0, 1);
    glTranslatef(0, 0, 0);
}


void MyGlWidget::drawGl()
{
    glPointSize(7);
    //glMatrixMode(GL_PROJECTION);
    glLineWidth(3);
    glBegin(currentPrimitive);
        glColor3f(1.0f, 0.0f, 0.0f); glVertex2d(0, 0.9);
        glColor3f(1.0f, 0.0f, 0.0f); glVertex2d(0.85, 0.5);
        glColor3f(0.0f, 1.0f, 0.0f); glVertex2d(0.5 , -0.85);
        glColor3f(0.0f, 1.0f, 0.0f); glVertex2d(-0.5, -0.85);
        glColor3f(0.0f, 0.0f, 1.0f); glVertex2d(-0.85, 0.5);
   glEnd();

//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(0,20,20,0,1,0);

//    glPointSize(10);
//    glBegin(currentPrimitive);
//        glColor3f(1, 0, 0);
//        glVertex2d(-0.4,  0.4);
//        glVertex2d( 0.4,  0.4);
//       glColor3f(0, 1, 0);
//        glVertex2d( 0.8, 0);
//        glVertex2d( 0.4, -0.4);
//        glColor3f(0, 0, 1);
//        glVertex2d(-0.4, -0.4);
//        glVertex2d( -0.8, 0);
//   glEnd();
}


void MyGlWidget::selectPrimitive(int primitive){
    if (primitive == 0){
        currentPrimitive = GL_POINTS;
    }else if(primitive == 1){
        currentPrimitive = GL_LINES;
    }else if(primitive == 2){
        currentPrimitive = GL_LINE_STRIP;
    }else if(primitive == 3){
        currentPrimitive = GL_LINE_LOOP;
    }else if(primitive == 4){
        currentPrimitive = GL_TRIANGLES;
    }else if(primitive == 5){
        currentPrimitive = GL_TRIANGLE_STRIP;
    }else if(primitive == 6){
        currentPrimitive = GL_TRIANGLE_FAN;
    }else if(primitive == 7){
        currentPrimitive = GL_QUADS;
    }else if(primitive == 8){
        currentPrimitive = GL_QUAD_STRIP;
    }else if(primitive == 9){
        currentPrimitive = GL_POLYGON;
    }else{
        std::cout << "rerrrror"<< "\n";
    }
    //updateGl();
    updateGL();
}

MyGlWidget::~MyGlWidget()
{
   // delete ui;
}
