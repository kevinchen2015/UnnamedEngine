#pragma once
#include <glad/glad.h>

class GLAttributes
{
public:
	GLAttributes();
	void AddAttribute(
		GLuint index,
		GLint size,
		GLenum type,
		GLsizei stride
	);

	GLuint GetHandle();
	void Bind();

private:
	GLuint mVAO;
};