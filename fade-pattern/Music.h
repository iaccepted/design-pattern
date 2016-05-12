#ifndef __MUSIC_H__
#define __MUSIC_H__

#include <iostream>

class Music
{
public:
	void on()
	{
		std::cout << "music is on" << std::endl;
	}

	void off()
	{
		std::cout << "music is off" << std::endl;
	}
};


#endif