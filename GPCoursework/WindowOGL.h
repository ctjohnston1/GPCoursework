#ifndef _WINDOWOGL_H
#define _WINDOWOGL_H

#include<windows.h>
#include"GL/glut.h"

class WindowOGL{
public:
	WindowOGL();
	bool initOGL(int width, int height);
	void renderOGL(float rotAngle);
	void shutdown();
	void onResize(int width, int height);
//	void setOrtho2D(int width, int height);
	//void setProjection3D(int width, int height);


};
#endif