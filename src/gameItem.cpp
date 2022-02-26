
#include <gameItem.h>

GameItem::GameItem(glm::vec3 pos, std::vector<Mesh> meshes) : pos(pos), meshes(meshes)
{
}

void GameItem::setModelViewMatrix(Shader &shader, Camera &camera) const
{

    glm::mat4 model = glm::mat4(1.0f);
    model = glm::translate(model, pos);
    glm::mat4 view = camera.GetViewMatrix();
    glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom), (float)800 / (float)600, 0.1f, 100.0f);
    shader.setMat4("model", model);
    shader.setMat4("view", view);
    shader.setMat4("projection", projection);
}

void GameItem::render(Shader &shader, Camera &camera) const
{
    setModelViewMatrix(shader, camera);

    for (auto mesh : meshes)
    {
        mesh.Draw(shader);
    }
}
