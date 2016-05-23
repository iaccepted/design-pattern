#ifndef __TV_H__
#define __TV_H__

#include <iostream>

using namespace std;

//receiver
class TV	
{
public:
	void on()
	{
		cout << "TV is on" << endl;
	}

	void off()
	{
		cout << "TV is off" << endl;
	}
};

#endif