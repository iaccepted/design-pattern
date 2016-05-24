#ifndef __ATEMPLATE_H__
#define __ATEMPLATE_H__

class ATemplate
{
public:
	virtual void stepOne() = 0;
	virtual void stepTwo() = 0;
	virtual void stepThree() = 0;

	void algorithm()
	{
		stepOne();
		stepTwo();
		stepThree();
	}
};

#endif