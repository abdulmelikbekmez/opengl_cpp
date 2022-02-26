
#ifndef GAMEITEM_H
#define GAMEITEM_H

#include "camera.h"
#include "mesh.h"
#include "shader.h"
#include <glm/glm.hpp>
#include <vector>

class GameItem {
private:
  glm::vec3 pos;
  std::vector<Mesh> meshes;

  void setModelViewMatrix(Shader &shader, Camera &camera) const;

public:
  GameItem(glm::vec3 pos, std::vector<Mesh> meshes);

  void render(Shader &shader, Camera &camera) const;
};

#endif // !GAMEITEM_H
