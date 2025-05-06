#version 460 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main() {
    mat4 scaledModel = model * mat4(
        2.0, 0.0, 0.0, 0.0, // Увеличиваем в 2 раза по X
        0.0, 2.0, 0.0, 0.0, // Увеличиваем в 2 раза по Y
        0.0, 0.0, 2.0, 0.0, // Увеличиваем в 2 раза по Z
        0.0, 0.0, 0.0, 1.0
    );
    gl_Position = projection * view * scaledModel * vec4(aPos, 1.0);
}