#ifndef __USCREATOR_H__
#define __USCREATOR_H__

#include "Creator.h"
#include "USProduct.h"

class USCreator :public Creator
{
public:
	Product *createProduct()
	{
		return new USProduct("US");
	}
};
#endif
