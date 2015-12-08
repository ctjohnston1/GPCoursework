#ifndef _GAMECONSTANTS_H
#define _GAMECONSTANTS_H


#define GLM_FORCE_RADIANS

//the title of the game coursework
#define WINDOW_TITLE "OpenGL Coursework"

//LOADING THE LIBRARIES
//windows and openGL
#include<stdlib.h>
#include<windows.h>
#include"GL\glut.h"
#include<iostream>
#include<string>
#include<ctime>

//image texture loading libraries
#include"IL\il.h"
#include"IL\ilu.h"
#include"IL\ilut.h"

//the model loading library
//not used atm but will be necessary for later on
#include"glm-0.3.2\glm\glm.h"

//font library
#include"FTGL\ftgl.h"

//audio library
#include"OpenAL\al.h"
#include"OpenAL\alc.h"
#include"OpenAL\alut.h"

//glm ie the math library
#include"glm\glm.hpp"
#include"glm\gtc\matrix_transform.hpp"
#include"glm\geometric.hpp"
#include"glm\gtc\quaternion.hpp"
#include"glm\gtc\type_ptr.hpp"
#include"glm\gtx\quaternion.hpp"

//the STL container and algorithms
#include<vector>
#include<map>
#include<algorithm>


#endif