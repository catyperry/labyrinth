#pragma once
#ifndef CHANGE_H
#define CHANGE_H

#include "stdafx.h"
#include <list>

using std::list;

enum ChangeType { CHANGEOBJ, ACTION };

class Change
	//Change-Instanz, enth�lt Informationen zum Austausch zwischen Changeable-Klassen
{
public:
	ChangeType Type;
	int ID;
};

class Changeable
	// Abstrakt, erm�glicht Kommunikation mit anderen Changeable-Klassen
{
protected:
	//enth�lt Informationen von anderen Klassen
	list<Change> extChanges;
	
public:
	//enth�lt die eigenen Ver�nderungen
	list<Change> intChanges;

	//f�gt externe Ver�nderungen zu extChanges hinzu
	void updateChanges(list<Change> newChanges);

};

#endif