//#include <stdexcept>
#include "../include/shaderprogram.h"
//#include "../include/GL/glew.h"

ShaderProgram::ShaderProgram(std::string vertexSource, std::string fragmentSource) {
    //GLint status;

    //const char *vert = vertexSource.c_str();
    //GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
    /*
    glShaderSource(vertexShader, 1, &vert, NULL);
    glCompileShader(vertexShader);

    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &status);
    if(status != GL_TRUE) {
        throw std::runtime_error("Failed to compile the vertex shader.");
    }

    const char *frag = fragmentSource.c_str();
    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &frag, NULL);
    glCompileShader(fragmentShader);

    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &status);
    if(status != GL_TRUE) {
        throw new std::runtime_error("Failed to compile the fragment shader.");
    }
    */
};
