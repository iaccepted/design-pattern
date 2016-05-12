#ifndef __ADAPTER_H__
#define __ADAPTER_H__

#include "Target.h"
#include "Adaptee.h"

class Adapter : public Target
{
public:
	Adapter(Adaptee *adaptee) : _adaptee(adaptee){}
	void request()
	{
		_adaptee->specifiedRequest();
	}

private:
	Adaptee *_adaptee;
};

#endif