// LabyrinthProjekt.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Change.h"
#include "Objekt.h"
#include "Logik.h"
#include "UserInterface.h"

int main()
{

	Logik logik;
	UserInterface ui;

	ui.set_ObjRef(logik.get_ObjRef());


	int mainloop = 4;

	while (mainloop) {
		logik.update();
		ui.updateChanges(logik.intChanges);

		ui.update();
		logik.updateChanges(ui.intChanges);

		mainloop -= 1;
	}


    return 0;
}

