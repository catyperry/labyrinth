#pragma once
#ifndef LOGIK_H
#define LOGIK_H

#include "Change.h"
#include "Objekt.h"

class Logik : public Changeable , public ObjListDonator
{
public:
	Logik();
	~Logik();
	void update();
};

#endif