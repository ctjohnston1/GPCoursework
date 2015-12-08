#include "windowOGL.h"

WindowOGL::WindowOGL(){

}

bool WindowOGL::initOGL(int width, int height){


	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glClearStencil(0);
	glClearDepth(1.0f);
	glDepthFunc(GL_LEQUAL);
	onResize(width,height);
	

	return true;
}

void WindowOGL::renderOGL(float rotAngle){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
}
void WindowOGL::shutdown(){
}
void WindowOGL::onResize(int width, int height){
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, float(width) / float(height), 1.0f, 100.0f);
}


/////////////////////////////////////////////////////////////////////
//this section is for when the camera classes have been implemented//
/////////////////////////////////////////////////////////////////////

//void WindowOGL::setOrtho2D(int width, int height){
//	glDisable(GL_DEPTH_TEST);
//	glDisable(GL_LIGHTING);
//	glViewport(0, 0, width, height);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(0.0, width, height, 0.0, 0.0, -1.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//void WindowOGL::setProjection3D(int width, int height){
//	onResize(width, height);
//}
