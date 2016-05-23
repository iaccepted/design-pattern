#ifndef __LIGHT_H__
#define __LIGHT_H__

#include <iostream>

using namespace std;

//receiver
class Light
{
public:
	void on()
	{
		cout << "Light is on" << endl;
	}

	void off()
	{
		cout << "Light is off" << endl;
	}
};

#endif