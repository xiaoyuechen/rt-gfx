#include <GLFW/glfw3.h>
#include <stdio.h>
#include <stdlib.h>

int
main (int argc, char *argv[argc + 1])
{
  /* Initialise the library */
  if (!glfwInit ())
    exit (EXIT_FAILURE);

  /* Create a windowed mode window and its OpenGL context */
  GLFWwindow *window = glfwCreateWindow (640, 480, "Hello World", 0, 0);
  if (!window)
    {
      glfwTerminate ();
      exit (EXIT_FAILURE);
    }
  /* Make the window's context current */
  glfwMakeContextCurrent (window);

  /* Loop until the user closes the window */
  while (!glfwWindowShouldClose (window))
    {
      /* Render here */
      glClear (GL_COLOR_BUFFER_BIT);

      /* Swap front and back buffers */
      glfwSwapBuffers (window);

      /* Poll for and process events */
      glfwPollEvents ();
    }

  glfwTerminate ();
  exit (EXIT_SUCCESS);
}
