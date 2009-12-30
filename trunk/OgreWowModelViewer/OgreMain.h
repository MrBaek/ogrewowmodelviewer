//------------------------------------------------------
// ���ϸ� : OgreMain.cpp
//
// �ۼ��� : ���μ�, bt2103@naver.com
//
// ��  �� : ����� ���� Ŭ����
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