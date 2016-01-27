#pragma once
#ifndef OBJEKT_H
#define OBJEKT_H

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

public:
	Objekt(ObjektTyp initTyp, Position initPos);
	ObjektTyp Typ;
	Position Pos;

};


#endif // !OBJEKT_H
