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
		//在组件方法之前加入特定的功能，这里是进行政治敏感词的剔除
		std::cout << "要阅读的内容进行了政治敏感词的剔除" << std::endl;
		hander->showContent();
	}

private:
	AReader *hander;
};

#endif