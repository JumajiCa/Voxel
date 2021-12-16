
#include "window.h"
#include <unistd.h>

struct Window window;

void framebuffer_size_callback(GLFWwindow* Window, int Width, int Height){
    glViewport(0, 0, Width, Height);
}

void errorCallback(int code, const char* Description){ 
    fprintf(stderr, "GLFW Error %d. - %s. \n", code, Description);
} 

void processInput(GLFWwindow* Window){
    if(glfwGetKey(Window, GLFW_KEY_ESCAPE) || glfwGetKey(Window, GLFW_KEY_CAPS_LOCK) == GLFW_PRESS){
        glfwSetWindowShouldClose(Window, true);
    }
}

void windowCreation(){ 

    if (!glfwInit()){ 
        fprintf(stderr, ANSI_RED "Failed To Start Window. \n"); 
        exit(-1);
    } 

    glfwSetErrorCallback(errorCallback);

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window.size = (vec2) {1280, 720};
    window.buffer = glfwCreateWindow(window.size.x, window.size.y, "Game. ", NULL, NULL);

    if (window.buffer == NULL){ 
        fprintf(stderr, ANSI_RED "Failed To Create GLFW Window. \n");
        glfwTerminate();
        exit(-1);
    }

    glfwMakeContextCurrent(window.buffer);

    glfwSetFramebufferSizeCallback(window.buffer, framebuffer_size_callback);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){ 
        fprintf(stderr, ANSI_RED "Failed To Start GLAD. \n");
        glfwTerminate();
        exit(-1);
    } 
} 

