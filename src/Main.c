
#include "util/util.h"
#include "gfx/window.h"

int main(){

    windowCreation();

    // Main Loop.
    while(!glfwWindowShouldClose(window.buffer)){


        // User Input Checks.
        processInput(window.buffer);

        // Colour The Screen With A Specific Colour.
        glClearColor(0.50f, 0.3f, 0.5f, 1.0f);
        // Clear The Screen Of Colour.
        glClear(GL_COLOR_BUFFER_BIT);

        // Event Checking And Buffer Swapping.
        glfwPollEvents();
        glfwSwapBuffers(window.buffer);

    }

    // Termination Of The GLFW Instance.
    glfwTerminate();

    return 0;
}
