#ifndef BOX_H
#define BOX_H

#include "camera.h"
#include "glad/glad.h"
#include "shader.h"
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Box
{
  private:
    static float vertices[];

  protected:
    glm::vec3 pos;
    static GLuint VAO;
    void setModelViewMatrix(Shader &shader, Camera &camera);
  public:
    Box();
    Box(glm::vec3 pos);
    static void init();
    glm::vec3 getPos();
    void draw(Shader &shader, Camera &camera);
};

class ShiningBox : public Box
{
  public:
    ShiningBox();
    ShiningBox(glm::vec3 pos);
    void draw(Shader &shader, Camera &camera, Box &lightSource);
};

#endif
