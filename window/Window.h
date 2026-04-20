#pragma once
#include <string>
#include <memory>
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "OGLRenderer.h"
#include "Model.h"

class Window {
  public:
    bool init(unsigned int width, unsigned int height, std::string title);
    void mainLoop();
    void cleanup();
    void handleMouseButtonEvents(int button, int action, int mods);
    void handleMousePositionEvents(double xPos, double yPos);
  private:
    GLFWwindow *mWindow = nullptr;

    std::unique_ptr<OGLRenderer> mRenderer;
    std::unique_ptr<Model> mModel;

    Camera mCamera{};

    // camera vals
    bool mMouseLock = false;
    int mMouseXPos = 0;
    int mMouseYPos = 0;

};
