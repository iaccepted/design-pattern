#include <iostream>
#include "Creator.h"
#include "USCreator.h"
#include "CNCreator.h"


int main()
{
	//���������ʱ�������Ҫʵ�����ĸ���Ʒ
	Creator *_uscreator = new USCreator();
	_uscreator->addDecorator();


	Creator *_cncreator = new CNCreator();
	_cncreator->addDecorator();

	return 0;
}