#ifndef __CNCREATOR_H__
#define __CNCREATOR_H__

#include "Creator.h"
#include "CNProduct.h"

class CNCreator :public Creator
{
public:
	Product *createProduct()
	{
		return new CNProduct("CN");
	}
};
#endif