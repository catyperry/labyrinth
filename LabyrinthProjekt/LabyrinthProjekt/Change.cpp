
#include "stdafx.h"
#include "Change.h"

void Changeable::updateChanges(list<Change> newChanges) {
	extChanges.splice(extChanges.end(), newChanges);
}