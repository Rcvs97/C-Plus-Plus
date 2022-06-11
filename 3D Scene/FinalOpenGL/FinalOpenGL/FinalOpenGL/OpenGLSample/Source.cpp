#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
using namespace std;
int width, height;
void draw(int w, int h)
{
	GLfloat angle = 45., left = -3., right = 3., bottom = -3., top = 3.;
	GLfloat near = 0.1, far = 1000.;
	GLfloat fov = 45., aspectRatio = (float)w / (float)h;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glOrtho(left, right, bottom, top, near, far);
	gluPerspective(fov, aspectRatio, near, far);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0, 0, -10);
	glRotatef(angle, 50., 35., 25.);
	glBegin(GL_QUADS); // Begin drawing the chair

	//table front leg
	//front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -3.0f, 1.6f);
	glVertex3f(1.8f, -3.0f, 1.6f);
	//back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);
	//right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.8f, -0.2f, 1.6f);
	glVertex3f(1.8f, -0.2f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.2f);
	glVertex3f(1.8f, -3.0f, 1.6f);
	//left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(1.4f, -0.2f, 1.6f);
	glVertex3f(1.4f, -0.2f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.2f);
	glVertex3f(1.4f, -3.0f, 1.6f);
	//back leg back
	//front
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);
	//back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -3.0f, -1.6f);
	glVertex3f(1.8f, -3.0f, -1.6f);
	//right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.8f, -0.2f, -1.6f);
	glVertex3f(1.8f, -0.2f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.2f);
	glVertex3f(1.8f, -3.0f, -1.6f);
	//left
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(1.4f, -0.2f, -1.6f);
	glVertex3f(1.4f, -0.2f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.2f);
	glVertex3f(1.4f, -3.0f, -1.6f);
	//leg left front
	glNormal3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -3.0f, 1.6f);
	glVertex3f(-1.8f, -3.0f, 1.6f);
	//back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);
	//right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-1.8f, -0.2f, 1.6f);
	glVertex3f(-1.8f, -0.2f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.2f);
	glVertex3f(-1.8f, -3.0f, 1.6f);
	//left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(-1.4f, -0.2f, 1.6f);
	glVertex3f(-1.4f, -0.2f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.2f);
	glVertex3f(-1.4f, -3.0f, 1.6f);
	//left leg back front
	//front
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);
	//back
	glNormal3f(0.0f, 0.0f, -1.0f);
	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -3.0f, -1.6f);
	glVertex3f(-1.8f, -3.0f, -1.6f);
	//right
	glNormal3f(1.0f, 0.0f, 0.0f);
	glVertex3f(-1.8f, -0.2f, -1.6f);
	glVertex3f(-1.8f, -0.2f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.2f);
	glVertex3f(-1.8f, -3.0f, -1.6f);
	//left
	glNormal3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(-1.4f, -0.2f, -1.6f);
	glVertex3f(-1.4f, -0.2f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.2f);
	glVertex3f(-1.4f, -3.0f, -1.6f);
	//chair back
	//front
	glColor3f(1,0.85,0.45);
	glVertex3f(1.8f, 3.5f, -1.8f);
	glVertex3f(1.8f, 3.5f, -2.0f);
	glEnd();
	glFlush();/*empties all buffers and executes all issued commands*/
}
int main(void)
{
	width = 640;
	height = 480;
	GLFWwindow* window;
	/* Initialize the library */
	if (!glfwInit())
		return -1;
	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height, "Final Project: Robert Chandler", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}
	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	//Initialize GLEW
	if (glewInit() != GLEW_OK)
		cout << "Error!" << endl;
	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		glfwGetFramebufferSize(window, &width, &height);
		glViewport(0, 0, width, height);
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glEnable(GL_DEPTH_TEST);
		draw(width, height);
		/* Swap front and back buffers */
		glfwSwapBuffers(window);
		/* Poll for and process events */
		glfwPollEvents();
	}
	glfwTerminate();
	return 0;
}