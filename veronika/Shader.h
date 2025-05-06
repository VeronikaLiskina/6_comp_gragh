#ifndef SHADER_H
#define SHADER_H

#include <GL/glew.h>
#include <string>
#include <glm/glm.hpp>

class Shader {
public:
    GLuint ID;

    Shader(const char* vertexPath, const char* fragmentPath);
    ~Shader();

    static GLuint LoadShader(const char* vertexPath, const char* fragmentPath);
    void use() const;

    static void SetUniform(GLuint shaderProgram, const std::string& name, float v1);
    static void SetUniform(GLuint shaderProgram, const std::string& name, float v1, float v2);
    static void SetUniform(GLuint shaderProgram, const std::string& name, float v1, float v2, float v3);
    static void SetUniform(GLuint shaderProgram, const std::string& name, float v1, float v2, float v3, float v4);

    static void SetUniform(GLuint shaderProgram, const std::string& name, int v1);
    static void SetUniform(GLuint shaderProgram, const std::string& name, int v1, int v2);
    static void SetUniform(GLuint shaderProgram, const std::string& name, int v1, int v2, int v3);
    static void SetUniform(GLuint shaderProgram, const std::string& name, int v1, int v2, int v3, int v4);

    static void SetUniformMatrix4(GLuint shaderProgram, const std::string& name, const glm::mat4& matrix);
    void setMat4(const std::string& name, const glm::mat4& mat) const;
    void setVec4(const std::string& name, float x, float y, float z, float w) const;

};

#endif