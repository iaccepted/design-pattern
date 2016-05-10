#include "Creator.h"
#include "USCreator.h"
#include "CNCreator.h"
#include "CNShose.h"
#include "CNHat.h"
#include "USShose.h"
#include "USHat.h"

int main()
{
	Creator *cn = new CNCreator();
	Creator *us = new USCreator();

	Hat *hat = cn->createHat();
	hat->showInfo();

	hat = us->createHat();
	hat->showInfo();

	Shose *shose = cn->createShose();
	shose->showInfo();

	shose = us->createShose();
	shose->showInfo();

	return 0;
}