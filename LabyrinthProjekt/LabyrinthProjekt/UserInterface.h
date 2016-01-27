#pragma once

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Change.h"
#include "Objekt.h"
#include "windows.h"

class UserInterface : public Changeable, public ObjListReceiver
{
private:
	HWND myconsole;
	HDC mydc;
	COLORREF COLOR;

	void initConsole();

public:
	UserInterface();
	~UserInterface();
	void update();
};

#endif