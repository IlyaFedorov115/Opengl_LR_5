#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>
#include <QWidget>
//#include <QOpenGLWidget>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <QOpenGLFunctions>

//#include <QGLShaderProgram>


class MyGlWidget : public QGLWidget, public QOpenGLFunctions
{
    Q_OBJECT

public:
    explicit MyGlWidget(QWidget *parent = 0);
    ~MyGlWidget();
    void moveView();

public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);
    void selectPrimitive(int primitive);

    //lr5
    void upView();
    void downView();
    void leftView();
    void rightView();
    void moveDistance();
    void moveCloser();


    static const char* loadShaderFile(const char* filePath);
    GLuint initShader(const char* filePath, GLuint type);

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();
    void drawGl();
    void drawScene();
    void draw3Dscene();

    //lr5
    void drawSquare();
    void Init();
    void initAllShaders();


private:
    int currentPrimitive;
    int countDots;
    int xRot;
    int yRot;
    int zRot;

    //lr5
    float xAlfa = 20;
    float zAlfa = 0;

    QPoint lastPos;

private:
    //Ui::MyGlWidget *ui;
};

#endif // MYGLWIDGET_H
