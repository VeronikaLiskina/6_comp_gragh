#version 460 core
layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aNormal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main() {
    mat4 scaledModel = model * mat4(
        2.0, 0.0, 0.0, 0.0, // ����������� � 2 ���� �� X
        0.0, 2.0, 0.0, 0.0, // ����������� � 2 ���� �� Y
        0.0, 0.0, 2.0, 0.0, // ����������� � 2 ���� �� Z
        0.0, 0.0, 0.0, 1.0
    );
    gl_Position = projection * view * scaledModel * vec4(aPos, 1.0);
}