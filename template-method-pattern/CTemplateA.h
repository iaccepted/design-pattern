#ifndef __CTEMPLATEA_H__
#define __CTEMPLATEA_H__

#include "ATemplate.h"
#include <iostream>

using namespace std;

class CTemplateA : public ATemplate
{
public:
	void stepOne()
	{
		cout << "A-->stepOne" << endl;
	}

	void stepTwo()
	{
		cout << "A-->stepTwo" << endl;
	}

	void stepThree()
	{
		cout << "A-->stepThree" << endl;
	}
};

#endif