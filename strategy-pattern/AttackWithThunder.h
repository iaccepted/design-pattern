/**********************************************************************
author: guo hong zhi
time:2016.2.9
website: www.iaccepted.net
github : https ://github.com/iaccepted
theme: design pattern ----> strategy pattern
************************************************************************/

#ifndef _ATTACKWITHTHUNDER_H__
#define _ATTACKWITHTHUNDER_H__

#include <iostream>
#include "AttackBehavior.h"

using std::cout;
using std::endl;

class AttackWithThunder : public AttackBehavior
{
public:
	void attack()
	{
		cout << "我用闪电进行攻击!" << endl;
	}
};

#endif