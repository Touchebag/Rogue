#define GLEW_STATIC

#include <iostream>
#include "GL/glew.h"
#include "GL/glfw3.h"
#include "shaderprogram.h"
//#include "../include/base.h"
using namespace std;

int main(int argc, char **argv){
    /* Initialize the library */
    cout << "Initializing GLFW...";
    if (glfwInit()) {
        cout << "Success!\n";
    } else {
        cout << "Failure!\n";
        return -1;
    }

    GLFWwindow *window = glfwCreateWindow(640, 480, "Hello World!", NULL, NULL);

    if(!window) {
        return -1;
    }

    glfwMakeContextCurrent(window);

    cout << "Initializing GLEW...";
    GLenum err = glewInit();
    if(err == GLEW_OK) {
        cout << "Success!\n";
    } else {
        cout << "Failure!\n";
        cout << "Error: " << glewGetErrorString(err);
        return -1;
    }

    //ShaderProgram *p1 = new ShaderProgram("hej", "hej");
        
    while(!glfwWindowShouldClose(window))
    {
        /* Swap front and back buffers and process events */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
	return 0;
}
