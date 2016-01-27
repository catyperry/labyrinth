#include "stdafx.h"
#include "Objekt.h"

Objekt::Objekt(ObjektTyp initTyp, Position initPos) : Typ(initTyp), Pos(initPos) {

}

Position::Position(int initx, int inity) : x(inity), y(inity) {

}