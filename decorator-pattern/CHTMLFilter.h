#ifndef __CHTMLFILTER_H__
#define __CHTMLFILTER_H__

#include <iostream>
#include "ADecorator.h"

class CHTMLFilter : public ADecorator
{
public:
	CHTMLFilter(AReader *a) : hander(a){}
	void showContent()
	{
		//���������֮ǰ�����ض��Ĺ��ܣ������ǽ���HTML�����޳�
		std::cout << "Ҫ�Ķ������ݽ�����HTML�����޳�" << std::endl;
		hander->showContent();
	}

private:
	AReader *hander;
};

#endif