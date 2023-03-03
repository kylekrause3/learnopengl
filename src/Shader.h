#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h> // include glad to get all the required OpenGL headers
#include <glm/glm.hpp>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>


class Shader
{
public:
    

    
    Shader();
    Shader(const char* vertexPath, const char* fragmentPath);
    void createNewShaders(const char* vertexPath, const char* fragmentPath);
    
    void use();
    
    void setBool(const std::string& name, bool value);
    
    void setInt(const std::string& name, int value);
    
    void setFloat(const std::string& name, float value);
    
    void setVec2(const std::string& name, const glm::vec2& value);
    void setVec2(const std::string& name, float x, float y);
    
    void setVec3(const std::string& name, const glm::vec3& value);
    void setVec3(const std::string& name, float x, float y, float z);
    
    void setVec4(const std::string& name, const glm::vec4& value);
    void setVec4(const std::string& name, float x, float y, float z, float w);
    
    void setMat2(const std::string& name, const glm::mat2& mat);
    
    void setMat3(const std::string& name, const glm::mat3& mat);
    
    void setMat4(const std::string& name, const glm::mat4& mat);

private:
    // the program ID
    unsigned int    ID;
    unsigned int    vertex, fragment;
    int             success;
    char            infoLog[512];

    // utility function for checking shader compilation/linking errors.
    // ------------------------------------------------------------------------
    void checkCompileErrors(unsigned int shader, std::string type);
};

#endif