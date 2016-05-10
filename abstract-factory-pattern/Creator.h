#ifndef __CREATOR_H__
#define __CREATOR_H__

#include "Hat.h"
#include "Shose.h"

class Creator
{
public:
	virtual Hat *createHat() = 0;
	virtual Shose *createShose() = 0;
};

#endif