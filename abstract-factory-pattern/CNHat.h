#ifndef __CNHAT_H__
#define __CNHAT_H__

#include "Hat.h"
#include <iostream>

class CNHat : public Hat
{
public:
	void showInfo()
	{
		std::cout << "this hat is made in China" << std::endl;
	}
};

#endif