#ifndef __CTEMPLATEB_H__
#define __CTEMPLATEB_H__

#include "ATemplate.h"
#include <iostream>

using namespace std;

class CTemplateB : public ATemplate
{
public:
	void stepOne()
	{
		cout << "B-->stepOne" << endl;
	}

	void stepTwo()
	{
		cout << "B-->stepTwo" << endl;
	}

	void stepThree()
	{
		cout << "B-->stepThree" << endl;
	}
};

#endif