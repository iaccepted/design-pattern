#ifndef __ADAPTEE_H__
#define __ADAPTEE_H__

#include <iostream>

class Adaptee
{
public:
	void specifiedRequest()
	{
		std::cout << "ok, specified request!" << std::endl;
	}
};

#endif