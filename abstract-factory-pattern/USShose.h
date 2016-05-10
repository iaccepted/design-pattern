#ifndef __USSHOSE_H__
#define __USSHOSE_H__

#include "Shose.h"
#include <iostream>

class USShose :public Shose
{
public:
	void showInfo()
	{
		std::cout << "this shose is made in United State!" << std::endl;
	}
};

#endif