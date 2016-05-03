#include <iostream>
#include "Creator.h"
#include "USCreator.h"
#include "CNCreator.h"


int main()
{
	//在生成类的时候决定了要实例化哪个产品
	Creator *_uscreator = new USCreator();
	_uscreator->addDecorator();


	Creator *_cncreator = new CNCreator();
	_cncreator->addDecorator();

	return 0;
}