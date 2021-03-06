#include <iostream>
using namespace std;

#include "glfw_engine2D.hpp"
#include <GL/glut.h>

using namespace cpp_prosto::graphical;


class test : public glfw_engine2D
{
public:
    test() : glfw_engine2D("TEST")
    {
    }

    void drawGLFW() override
    {
        drawText(100, 100, "Hello OpenGL!!");
    }

    void keyEvent(GLFWwindow *, int, int, int, int) override
    {
    }

    void mouseKeyEvent(GLFWwindow *, int, int, int) override
    {
    }
};


int main(int argcp, char **argv)
{
    glutInit(&argcp, argv);

    test a;
    a.run();
    return 0;
}
