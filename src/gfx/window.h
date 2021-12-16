

#ifndef WINDOW_H
#define WINDOW_H

#include "gfx.h"

struct Window{ 
    u32 width; 
    u32 height; 
    vec2 size;
    GLFWwindow* buffer;
};

struct Mouse{ 
    // TODO. - Read Up On The Documentation For Mouse Activities In GLFW.
}; 

struct Keyboard{ 
}; 

extern struct Window window;

// Makes Sure That All Resizes To The Main GLFW Window Object Get Reported To The 'glViewport' Function.
void framebuffer_size_callback(GLFWwindow* Window, int Width, int Height);
void errorCallback(int code, const char* Description);
void processInput(GLFWwindow* Window);

void windowCreation();


#endif
