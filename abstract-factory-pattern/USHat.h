#ifndef __USHAT_H__
#define __USHAT_H__

#include "Hat.h"
#include <iostream>

class USHat : public Hat
{
public:
	void showInfo()
	{
		std::cout << "this hat is made in United State" << std::endl;
	}
};

#endif