#pragma once

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Change.h"
#include "Objekt.h"

class UserInterface : public Changeable, public ObjListReceiver
{
public:
	UserInterface();
	~UserInterface();
	void update();
};

#endif