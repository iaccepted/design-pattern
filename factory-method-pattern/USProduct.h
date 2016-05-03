#ifndef __USPRODUCT_H__
#define __USPRODUCT_H__

#include "Product.h"

class USProduct : public Product
{
public:
	USProduct(string name) :Product(name)
	{
	}
};

#endif