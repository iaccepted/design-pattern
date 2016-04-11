/**********************************************************************
time:2016.2.9
author: guo hong zhi
website: www.iaccepted.net
github : https ://github.com/iaccepted
theme: design pattern ----> strategy pattern
************************************************************************/

#include "Player.h"
#include "AttackWithGun.h"
#include "AttackWithSword.h"
#include "AttackWithThunder.h"

int main()
{
	//当然不同的职业最好有自己的实现类继承自player，这里为了简单不进行扩展
	Player mage;//法师 mage
	mage.setAttackBehavior(new AttackWithThunder());

	Player warrior; //战士 warrior
	warrior.setAttackBehavior(new AttackWithSword());

	Player gunner;//枪手 gunner
	gunner.setAttackBehavior(new AttackWithGun());


	//start attack
	mage.performAttack();
	warrior.performAttack();
	gunner.performAttack();

	//我们可以轻松的更换法师的攻击行为，让其用剑进行攻击
	mage.setAttackBehavior(new AttackWithGun());
	mage.performAttack();
	return 0;
}