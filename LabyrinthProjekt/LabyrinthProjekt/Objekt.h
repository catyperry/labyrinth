#pragma once

#ifndef OBJEKT_H
#define OBJEKT_H
#include "stdafx.h"
#include "list"

using std::list;

enum ObjektTyp
{
	MAUER, AKTEUR, MUNITION, ITEM, KEY, PORTAL
};

class Position {
public:
	Position(int initx, int inity);
	int x;
	int y;
};


class Objekt {
	//Objekt-Instanz für ObjList

public:
	Objekt(ObjektTyp initTyp, Position initPos);
	ObjektTyp Typ;
	Position Pos;
};

class ObjListDonator {
	//abstrakt, enthält Liste der Objekt für den ObjListReceiver

public:
	list<Objekt> ObjList;
	list<Objekt> * get_ObjRef();
};

class ObjListReceiver {
	//abstrakt, enthält Pointer auf die Liste der Objekte von ObjListDonator

protected:
	list<Objekt> * ObjListRef;
public:
	void set_ObjRef(list<Objekt> * ObjRef);
};


#endif // !OBJEKT_H
