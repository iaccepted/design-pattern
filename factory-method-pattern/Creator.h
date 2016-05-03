#ifndef __CREATOR_H__
#define __CREATOR_H__

#include <iostream>
#include "Product.h"

class Creator
{
public:
	void addDecorator()
	{
		_product = createProduct();

		//add solve to the product
		cout << "Add a decorator for " << _product->getName() << endl;
	}

	virtual Product *createProduct() = 0;

private:
	Product *_product;
};

#endif