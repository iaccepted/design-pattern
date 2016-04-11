/**********************************************************************
time:2016.2.9
author: guo hong zhi
website: www.iaccepted.net
github : https ://github.com/iaccepted
theme: design pattern ----> strategy pattern
************************************************************************/

#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "AttackBehavior.h"

class Player
{
private:
	unsigned user_id;
	unsigned health_point;
	unsigned speed;
	unsigned level;
	unsigned attack_point;

	AttackBehavior *attackBehavior;//攻击行为的策略选择
public:
	void performAttack(); // 进行攻击
	void setAttackBehavior(AttackBehavior *behavior);
};

#endif
