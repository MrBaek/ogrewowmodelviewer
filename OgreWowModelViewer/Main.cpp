#include "OgreMain.h"

#include "MPQ.h"

INT WINAPI WinMain( HINSTANCE hInstance, HINSTANCE, LPSTR strCmdLine, INT )
{
	try
	{
		OgreMain app;
		app.go();
	}
	catch( Exception &e )
	{
		MessageBoxA( 0, e.getFullDescription().c_str(), 0, 0);
		return 0;
	}
	return 0;
}