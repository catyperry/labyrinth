#include "stdafx.h"
#include "UserInterface.h"


UserInterface::UserInterface()
{
}


UserInterface::~UserInterface()
{
}

void UserInterface::update() {
	initConsole();
}

void UserInterface::initConsole() {
	//Get a console handle
	HWND myconsole = GetConsoleWindow();
	//Get a handle to device context
	HDC mydc = GetDC(myconsole);
	COLOR = RGB(123, 234, 12);

	SetPixel(mydc, 1, 1, COLOR);

	ReleaseDC(myconsole, mydc);

}