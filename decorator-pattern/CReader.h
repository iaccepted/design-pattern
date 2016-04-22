#ifndef __CREADER_H__
#define __CREADER_H__

#include <iostream>
#include "AReader.h"

using namespace std;

//concrete component
class CReader : public AReader
{
public:
	void showContent()
	{
		cout << "显示要阅读的内容" << endl;
	}
};

#endif