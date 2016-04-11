/**********************************************************************
author: guo hong zhi
time:2016.2.9
website: www.iaccepted.net
github : https ://github.com/iaccepted
theme: design pattern ----> strategy pattern
************************************************************************/

#ifndef _ATTACKWITHSWORD_H__
#define _ATTACKWITHSWORD_H__

#include <iostream>
#include "AttackBehavior.h"

using std::cout;
using std::endl;

class AttackWithSword : public AttackBehavior
{
public:
	void attack()
	{
		cout << "挥舞手中的长剑进行攻击!" << endl;
	}
};

#endif