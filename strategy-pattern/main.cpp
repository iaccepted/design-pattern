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
	//��Ȼ��ͬ��ְҵ������Լ���ʵ����̳���player������Ϊ�˼򵥲�������չ
	Player mage;//��ʦ mage
	mage.setAttackBehavior(new AttackWithThunder());

	Player warrior; //սʿ warrior
	warrior.setAttackBehavior(new AttackWithSword());

	Player gunner;//ǹ�� gunner
	gunner.setAttackBehavior(new AttackWithGun());


	//start attack
	mage.performAttack();
	warrior.performAttack();
	gunner.performAttack();

	//���ǿ������ɵĸ�����ʦ�Ĺ�����Ϊ�������ý����й���
	mage.setAttackBehavior(new AttackWithGun());
	mage.performAttack();
	return 0;
}