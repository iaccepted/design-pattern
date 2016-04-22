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
		//在组件方法之前加入特定的功能，这里是进行HTML语句的剔除
		std::cout << "要阅读的内容进行了HTML语句的剔除" << std::endl;
		hander->showContent();
	}

private:
	AReader *hander;
};

#endif