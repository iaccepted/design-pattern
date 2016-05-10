#ifndef __CNSHOSE_H__
#define __CNSHOSE_H__

#include "Shose.h"
#include <iostream>

class CNShose :public Shose
{
public:
	void showInfo()
	{
		std::cout << "this shose is made in China!" << std::endl;
	}
};

#endif