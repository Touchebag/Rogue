#include <iostream>
#include "../include/GL/glew.h"
#include "../include/GL/glfw3.h"
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

    cout << "Initializing GLEW...";
    if(glewInit) {
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
        
    while(!glfwWindowShouldClose(window))
    {
        /* Swap front and back buffers and process events */
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
	return 0;
}
