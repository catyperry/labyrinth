#pragma once
#ifndef CHANGE_H
#define CHANGE_H

#include "stdafx.h"
#include <list>

using std::list;

enum ChangeType { CHANGEOBJ, ACTION };

class Change
	//Change-Instanz, enthält Informationen zum Austausch zwischen Changeable-Klassen
{
public:
	ChangeType Type;
	int ID;
};

class Changeable
	// Abstrakt, ermöglicht Kommunikation mit anderen Changeable-Klassen
{
protected:
	//enthält Informationen von anderen Klassen
	list<Change> extChanges;
	
public:
	//enthält die eigenen Veränderungen
	list<Change> intChanges;

	//fügt externe Veränderungen zu extChanges hinzu
	void updateChanges(list<Change> newChanges);

};

#endif