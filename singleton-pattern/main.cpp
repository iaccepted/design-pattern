#include "Singleton.h"

int main()
{
	Singleton *singleton = Singleton::getInstance();

	singleton->print();

	singleton = Singleton::getInstance();
	singleton->print();
	return 0;
}