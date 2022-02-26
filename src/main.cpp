#include "box.h"
#include "gameItem.h"
#include <GLFW/glfw3.h>
#include <glm/detail/type_vec.hpp>

void callback_framebuffer_size(GLFWwindow *window, int width, int height);

void callback_mouse(GLFWwindow *window, double xpos, double ypos);
void callback_scroll(GLFWwindow *window, double xoffset, double yoffset);
void callback_error(int error, const char *description);

void input(GLFWwindow *window);

// settings
const unsigned int SCR_HEIGHT = 1000;
const unsigned int SCR_WIDTH = 1000;

// camera
Camera camera(glm::vec3(0.0f, 0.0f, 3.0f));
float lastX = SCR_WIDTH / 2.0f;
float lastY = SCR_HEIGHT / 2.0f;
bool firstMouse = true;

// timing
float deltaTime = 0.0f; // time between current frame and last frame
float lastFrame = 0.0f;

int main(int argc, char const *argv[])
{
    if (!glfwInit())
    {
        puts("glfw baslatilamadi!!!");
        return EXIT_FAILURE;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "OpenGL Cpp", NULL, NULL);
    if (!window)
    {
        puts("Pencere olusturulamadi!!");
        glfwTerminate();
        return EXIT_FAILURE;
    }

    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, callback_framebuffer_size);
    glfwSetCursorPosCallback(window, callback_mouse);
    glfwSetScrollCallback(window, callback_scroll);
    glfwSetErrorCallback(callback_error);

    // tell GLFW to capture our mouse
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        puts("Failed to load GLAD!!");
        glfwTerminate();
        return EXIT_FAILURE;
    }

    // configure global opengl state
    // -----------------------------
    glEnable(GL_DEPTH_TEST);

    Box::init();

    std::vector<Vertex> vertices = {
        {glm::vec3(-0.5f, 0.5f, 0.0f), glm::vec3(0.0f, 0.0f, -1.0f)},
        {glm::vec3(-0.5f, -0.5f, 0.0f), glm::vec3(0.0f, 0.0f, -1.0f)},
        {glm::vec3(0.5f, -0.5f, 0.0f), glm::vec3(0.0f, 0.0f, -1.0f)},
        {glm::vec3(0.5f, 0.5f, 0.0f), glm::vec3(0.0f, 0.0f, -1.0f)},
    };

    std::vector<GLuint> indices = {0, 1, 3, 3, 1, 2};
    Mesh m(vertices, indices);

    GameItem square(glm::vec3{5, 2, 5}, std::vector<Mesh>{m});

    Box box(glm::vec3(5, 2, 5));
    ShiningBox boxes[10000];

    int index = 0;

    for (int i = 0; i < 100; i++)
        for (int j = 0; j < 100; j++)
            boxes[index++] = ShiningBox(glm::vec3(i, 0, j));

    Shader lightSourceShader("../res/lightingVertex.glsl", "../res/lightingFragment.glsl");
    Shader defaultShader("../res/vertex.glsl", "../res/fragment.glsl");

    glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

    glClearColor(.1f, .2f, .2f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        // per-frame time logic
        // --------------------
        float currentFrame = glfwGetTime();
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        // input
        input(window);

        // render
        defaultShader.use();
        // box.draw(defaultShader, camera);
        square.render(defaultShader, camera);

        lightSourceShader.use();

        for (ShiningBox sbox : boxes)
            sbox.draw(lightSourceShader, camera, box);

        // check and call events and swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

void callback_framebuffer_size(GLFWwindow *window, int width, int height)
{
    glViewport(0, 0, width, height);
}

void input(GLFWwindow *window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE))
        glfwSetWindowShouldClose(window, GL_TRUE);

    if (glfwGetKey(window, GLFW_KEY_E))
        glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    if (glfwGetKey(window, GLFW_KEY_Q))
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        camera.ProcessKeyboard(FORWARD, deltaTime);

    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        camera.ProcessKeyboard(BACKWARD, deltaTime);

    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        camera.ProcessKeyboard(LEFT, deltaTime);

    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        camera.ProcessKeyboard(RIGHT, deltaTime);
}
// glfw: whenever the mouse moves, this callback is called
// -------------------------------------------------------
void callback_mouse(GLFWwindow *window, double xpos, double ypos)
{
    if (firstMouse)
    {
        lastX = xpos;
        lastY = ypos;
        firstMouse = false;
    }

    float xoffset = xpos - lastX;
    float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top

    lastY = ypos;
    lastX = xpos;

    camera.ProcessMouseMovement(xoffset, yoffset);
}

// glfw: whenever the mouse scroll wheel scrolls, this callback is called
// ----------------------------------------------------------------------
void callback_scroll(GLFWwindow *window, double xoffset, double yoffset)
{
    camera.ProcessMouseScroll(yoffset);
}

void callback_error(int error, const char *description)
{
    fprintf(stderr, "Error: %s \n", description);
}
