#ifndef __TV_H__
#define __TV_H__

#include <iostream>

class TV
{
public:
	void on()
	{
		std::cout << "TV is on" << std::endl;
	}

	void off()
	{
		std::cout << "TV is off" << std::endl;
	}
};


#endif