#ifndef __USCREATOR_H__
#define __USCREATOR_H__

#include "Creator.h"
#include "USShose.h"
#include "USHat.h"

class USCreator : public Creator
{
public:
	Hat *createHat()
	{
		return new USHat();
	}

	Shose *createShose()
	{
		return new USShose();
	}
};

#endif