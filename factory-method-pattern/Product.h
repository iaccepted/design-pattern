#ifndef __PRODUCT_H__
#define __PRODUCT_H__

#include <string>

using namespace std;

class Product
{
public:
	Product(string name) :_name(name){}
	string getName()
	{
		return _name;
	}
private:
	string _name;
};

#endif