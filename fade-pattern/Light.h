#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <iostream>

class Light
{
public:
	void on()
	{
		std::cout << "light is on" << std::endl;
	}

	void off()
	{
		std::cout << "light is off" << std::endl;
	}
};


#endif