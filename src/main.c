#include <GLFW/glfw3.h>
#include <check.h>
#include <stddef.h>
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
  printf ("wow\n");
  printf ("%s%d\n", "best", 10);
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

START_TEST (glfw_init_test)
{
  ck_assert (glfwCreateWindow (10, 10, "good", 0, 0));
}
END_TEST
