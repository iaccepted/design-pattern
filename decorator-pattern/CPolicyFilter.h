#ifndef __CPOLICYFILTER_H__
#define __CPOLICYFILTER_H__

#include <iostream>
#include "ADecorator.h"

class CPolicyFilter : public ADecorator
{
public:
	CPolicyFilter(AReader *a) : hander(a){}
	void showContent()
	{
		//���������֮ǰ�����ض��Ĺ��ܣ������ǽ����������дʵ��޳�
		std::cout << "Ҫ�Ķ������ݽ������������дʵ��޳�" << std::endl;
		hander->showContent();
	}

private:
	AReader *hander;
};

#endif