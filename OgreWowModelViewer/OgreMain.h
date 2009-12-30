//------------------------------------------------------
// 파일명 : OgreMain.cpp
//
// 작성자 : 백인선, bt2103@naver.com
//
// 설  명 : 오우거 메인 클래스
//------------------------------------------------------
#pragma once

#include <Ogre.h>
#include <OIS/OIS.h>
#include <vector>

using namespace Ogre;

class OgreMain
{
private:
	Root			  *mRoot;
	RenderWindow	  *mWindow;
	SceneManager	  *mSceneMgr;
	Camera			  *mCamera;
	Viewport		  *mViewport;
	OIS::InputManager *mInputMgr;

public:
	OgreMain();
	~OgreMain();

	void go() { mRoot->startRendering(); }
	void renderOneFrame() { mRoot->renderOneFrame(); }
};