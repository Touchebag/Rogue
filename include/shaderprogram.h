#ifndef SHADERPROGRAM_H
#define SHADERPROGRAM_H

#include <string>

class ShaderProgram {
    public:
        ShaderProgram(std::string vertexShader, std::string fragmentShader);
        std::string loadShader(std::string path);
};

#endif
