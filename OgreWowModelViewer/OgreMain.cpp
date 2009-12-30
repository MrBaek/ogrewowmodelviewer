//------------------------------------------------------
// 파일명 : OgreMain.cpp
//
// 작성자 : 백인선, bt2103@naver.com
//
// 설  명 : 오우거 메인 클래스
//------------------------------------------------------
#include "OgreMain.h"

//------------------------------------------------------
// 함수명 : OgreMain()
// 설  명 : 생성자
//------------------------------------------------------
OgreMain::OgreMain()
{
	// 오거 루트 초기화
	mRoot = new Root();

	// 플러그인 로드
#ifdef _DEBUG;
	mRoot->loadPlugin("RenderSystem_Direct3D9_d");
#else
	mRoot->loadPlugin("RenderSystem_Direct3D9");
#endif

	// 설정창 로드
	bool result = mRoot->showConfigDialog();

	// 설정창 보이기가 성공했다면 윈도우 생성및 기타 작업
	if( result )
	{
		// 초기화
		mWindow = mRoot->initialise(true, "Ogre PhysX");
	
		// 기본 씬매니져
		mSceneMgr = mRoot->createSceneManager(ST_GENERIC, "MainSceneManager");
		mSceneMgr->setAmbientLight( ColourValue(1.0, 1.0, 1.0) );

		// 카메라
		mCamera = mSceneMgr->createCamera("MainCamera");
		mCamera->setNearClipDistance(3);

		// 뷰포트
		mViewport = mWindow->addViewport( mCamera );
		mViewport->setBackgroundColour( ColourValue(0.25,0.25,0.25) );
		mCamera->setAspectRatio( Real(mViewport->getActualWidth()) /
								 Real(mViewport->getActualHeight()) );
		mCamera->setAutoAspectRatio(true);

		// 입력 시스템
		size_t windowHwnd = 0;
		mWindow->getCustomAttribute("WINDOW", &windowHwnd);
		mInputMgr = OIS::InputManager::createInputSystem(windowHwnd);
	}
}

//------------------------------------------------------
// 함수명 : ~OgreMain()
// 설  명 : 소멸자
//------------------------------------------------------
OgreMain::~OgreMain()
{
	if( mRoot )
	{
		delete mRoot;
		mRoot = NULL;
	}
}