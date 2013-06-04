#include <iostream>
#include "../include/GL/glew.h"
#include "../include/GL/glfw.h"
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

    if (!glfwOpenWindow(640, 480, 8, 8, 8, 0, 24, 0, GLFW_WINDOW))
        return -1;
        
    while (glfwGetWindowParam(GLFW_OPENED))
    {
        /* Swap front and back buffers and process events */
        glfwSwapBuffers();
    }

	return 0;
}
