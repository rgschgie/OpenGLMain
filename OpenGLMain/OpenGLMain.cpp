// OpenGLMain.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <GLFW\glfw3native.h>
#include <GLFW/glfw3.h>
#include <glad.h>

#include <iostream>


using namespace std;

int main()
{
	// define the function's prototype
	typedef void(*GL_GENBUFFERS) (GLsizei, GLuint*);
	// find the function and assign it to a function pointer
	GL_GENBUFFERS glGenBuffers = (GL_GENBUFFERS)wglGetProcAddress("glGenBuffers");
	// function can now be called as normal
	unsigned int buffer;
	glGenBuffers(1, &buffer);
	
	
	return EXIT_SUCCESS;
}

