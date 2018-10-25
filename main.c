#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <stdio.h>

#include "window.h"
#include "shader.h"

int main()
{
    createWindow(500, 500, "graphics pad");

    init();
    loop();

    destroyWindow();
}

void gl_init()
{

    glClearColor(+0.0f, +0.0f, +0.0f, +1.0f);

    GLuint vaoID;
    glGenVertexArrays(1, &vaoID);
    glBindVertexArray(vaoID);


    GLuint program = createShaderProgram("vertexShader.glsl", "fragmentShader.glsl");
    glUseProgram(program);
}

void gl_loop()
{
    glClear(GL_COLOR_BUFFER_BIT);
}