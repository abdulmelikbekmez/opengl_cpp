#ifndef MESH_H
#define MESH_H

#include "glad/glad.h"
#include "shader.h"
#include <glm/glm.hpp>
#include <string>
#include <vector>

struct Vertex
{
    glm::vec3 Position;
    glm::vec3 Normal;
};

class Mesh
{
  public:
    // mesh data
    std::vector<Vertex> vertices;
    std::vector<GLuint> indices;
    GLuint VAO;

    Mesh(std::vector<Vertex> vertices, std::vector<GLuint> indices);
    void Draw(const Shader &shader) const;

  private:
    GLuint VBO, EBO;
    void setupMesh();
};
#endif
