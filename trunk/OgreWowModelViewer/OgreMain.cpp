//------------------------------------------------------
// ���ϸ� : OgreMain.cpp
//
// �ۼ��� : ���μ�, bt2103@naver.com
//
// ��  �� : ����� ���� Ŭ����
//------------------------------------------------------
#include "OgreMain.h"

//------------------------------------------------------
// �Լ��� : OgreMain()
// ��  �� : ������
//------------------------------------------------------
OgreMain::OgreMain()
{
	// ���� ��Ʈ �ʱ�ȭ
	mRoot = new Root();

	// �÷����� �ε�
#ifdef _DEBUG;
	mRoot->loadPlugin("RenderSystem_Direct3D9_d");
#else
	mRoot->loadPlugin("RenderSystem_Direct3D9");
#endif

	// ����â �ε�
	bool result = mRoot->showConfigDialog();

	// ����â ���̱Ⱑ �����ߴٸ� ������ ������ ��Ÿ �۾�
	if( result )
	{
		// �ʱ�ȭ
		mWindow = mRoot->initialise(true, "Ogre PhysX");
	
		// �⺻ ���Ŵ���
		mSceneMgr = mRoot->createSceneManager(ST_GENERIC, "MainSceneManager");
		mSceneMgr->setAmbientLight( ColourValue(1.0, 1.0, 1.0) );

		// ī�޶�
		mCamera = mSceneMgr->createCamera("MainCamera");
		mCamera->setNearClipDistance(3);

		// ����Ʈ
		mViewport = mWindow->addViewport( mCamera );
		mViewport->setBackgroundColour( ColourValue(0.25,0.25,0.25) );
		mCamera->setAspectRatio( Real(mViewport->getActualWidth()) /
								 Real(mViewport->getActualHeight()) );
		mCamera->setAutoAspectRatio(true);

		// �Է� �ý���
		size_t windowHwnd = 0;
		mWindow->getCustomAttribute("WINDOW", &windowHwnd);
		mInputMgr = OIS::InputManager::createInputSystem(windowHwnd);
	}
}

//------------------------------------------------------
// �Լ��� : ~OgreMain()
// ��  �� : �Ҹ���
//------------------------------------------------------
OgreMain::~OgreMain()
{
	if( mRoot )
	{
		delete mRoot;
		mRoot = NULL;
	}
}