#pragma once
#ifndef CHANGE_H
#define CHANGE_H

#include "stdafx.h"
#include <list>

using std::list;

enum ChangeType { CHANGEOBJ, ACTION };

class Change
{
public:
	ChangeType Type;
	int ID;
};

class Changeable
{
protected:
	list<Change> extChanges;
	
public:
	list<Change> intChanges;

	void updateChanges(list<Change> newChanges);

};

#endif