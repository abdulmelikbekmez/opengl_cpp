#include <box.h>
#include <glm/detail/type_vec.hpp>

float Box::vertices[] = {-0.5f, -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f,

                         0.5f,  -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f,

                         0.5f,  0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f,

                         0.5f,  0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f,

                         -0.5f, 0.5f,  -0.5f, 0.0f,  0.0f,  -1.0f,

                         -0.5f, -0.5f, -0.5f, 0.0f,  0.0f,  -1.0f,

                         -0.5f, -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,

                         0.5f,  -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,

                         0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,

                         0.5f,  0.5f,  0.5f,  0.0f,  0.0f,  1.0f,

                         -0.5f, 0.5f,  0.5f,  0.0f,  0.0f,  1.0f,

                         -0.5f, -0.5f, 0.5f,  0.0f,  0.0f,  1.0f,

                         -0.5f, 0.5f,  0.5f,  -1.0f, 0.0f,  0.0f,

                         -0.5f, 0.5f,  -0.5f, -1.0f, 0.0f,  0.0f,

                         -0.5f, -0.5f, -0.5f, -1.0f, 0.0f,  0.0f,

                         -0.5f, -0.5f, -0.5f, -1.0f, 0.0f,  0.0f,

                         -0.5f, -0.5f, 0.5f,  -1.0f, 0.0f,  0.0f,

                         -0.5f, 0.5f,  0.5f,  -1.0f, 0.0f,  0.0f,

                         0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,

                         0.5f,  0.5f,  -0.5f, 1.0f,  0.0f,  0.0f,

                         0.5f,  -0.5f, -0.5f, 1.0f,  0.0f,  0.0f,

                         0.5f,  -0.5f, -0.5f, 1.0f,  0.0f,  0.0f,

                         0.5f,  -0.5f, 0.5f,  1.0f,  0.0f,  0.0f,

                         0.5f,  0.5f,  0.5f,  1.0f,  0.0f,  0.0f,

                         -0.5f, -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,

                         0.5f,  -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,

                         0.5f,  -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,

                         0.5f,  -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,

                         -0.5f, -0.5f, 0.5f,  0.0f,  -1.0f, 0.0f,

                         -0.5f, -0.5f, -0.5f, 0.0f,  -1.0f, 0.0f,

                         -0.5f, 0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,

                         0.5f,  0.5f,  -0.5f, 0.0f,  1.0f,  0.0f,

                         0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,

                         0.5f,  0.5f,  0.5f,  0.0f,  1.0f,  0.0f,

                         -0.5f, 0.5f,  0.5f,  0.0f,  1.0f,  0.0f,

                         -0.5f, 0.5f,  -0.5f, 0.0f,  1.0f,  0.0f};

GLuint Box::VAO;

Box::Box(glm::vec3 pos) : pos(pos)
{
}
Box::Box() : pos(glm::vec3(.0f, .0f, .0f))
{
}

void Box::init()
{
    GLuint VBO;
    glGenVertexArrays(1, &VAO);
    glBindVertexArray(VAO);

    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    // position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)0);
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void *)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    // unbind
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
}

glm::vec3 Box::getPos()
{
    return pos;
}

void Box::setModelViewMatrix(Shader &shader, Camera &camera)
{

    glm::mat4 model = glm::mat4(1.0f);
    model = glm::translate(model, pos);
    glm::mat4 view = camera.GetViewMatrix();
    glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom), (float)800 / (float)600, 0.1f, 100.0f);
    shader.setMat4("model", model);
    shader.setMat4("view", view);
    shader.setMat4("projection", projection);
}

void Box::draw(Shader &shader, Camera &camera)
{
    setModelViewMatrix(shader, camera);
    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, 36);
}

ShiningBox::ShiningBox() : Box()
{
}

ShiningBox::ShiningBox(glm::vec3 pos) : Box(pos)
{
}

void ShiningBox::draw(Shader &shader, Camera &camera, Box &lightSource)
{
    glBindVertexArray(VAO);
    shader.setVec3("objectColor", 1.0f, .5f, .31f);
    shader.setVec3("lightColor", 1.0f, 1.0f, 1.0f);
    shader.setVec3("viewPos", camera.Position);

    glm::vec3 lightColor;
    lightColor.x = sin(glfwGetTime() * 2.0f);
    lightColor.y = sin(glfwGetTime() * 0.7f);
    lightColor.z = sin(glfwGetTime() * 1.3f);
    glm::vec3 diffuseColor = lightColor * glm::vec3(.5f);
    glm::vec3 ambientColor = diffuseColor * glm::vec3(.2f);

    shader.setVec3("light.position", lightSource.getPos());
    shader.setVec3("light.ambient", ambientColor);
    shader.setVec3("light.diffuse", diffuseColor);
    shader.setVec3("light.specular", 1.0, 1.0, 1.0);

    shader.setVec3("material.ambient", 1.0f, 0.5f, 0.31f);
    shader.setVec3("material.diffuse", 1.0f, 0.5f, 0.31f);
    shader.setVec3("material.specular", 0.5f, 0.5f, 0.5f);
    shader.setFloat("material.shininess", 32.0f);

    setModelViewMatrix(shader, camera);

    glDrawArrays(GL_TRIANGLES, 0, 36);
}
