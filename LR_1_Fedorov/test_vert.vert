#version 110

varying vec4 color;
varying vec4 pos;

void main()
{
    gl_Position = gl_ModelViewMatrix * gl_Vertex;
   // gl_Position.z += gl_Color.y;
   // pos = gl_Vertex;
    color = gl_Color;
   // color[0] = 1.0;

    //if (gl_Position.y < -1.0) gl_Position.y += 2.0;

   // gl_Position.x += sin((gl_Position.y)*10.0 * 0.02);

}
