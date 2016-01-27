#include "Objekt.h"

Objekt::Objekt(ObjektTyp initTyp, Position initPos) : Typ(initTyp), Pos(initPos) {

}

Position::Position(int initx, int inity) : x(inity), y(inity) {

}

list<Objekt>* ObjListDonator::get_ObjRef() {
	return &ObjList;
}

void ObjListReceiver::set_ObjRef(list<Objekt> * ObjRef) {
	ObjListRef = ObjRef;
}

