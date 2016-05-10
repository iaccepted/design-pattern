#ifndef __CNCREATOR_H__
#define __CNCREATOR_H__

#include "Creator.h"
#include "CNShose.h"
#include "CNHat.h"

class CNCreator : public Creator
{
public:
	Hat *createHat()
	{
		return new CNHat();
	}

	Shose *createShose()
	{
		return new CNShose();
	}
};

#endif