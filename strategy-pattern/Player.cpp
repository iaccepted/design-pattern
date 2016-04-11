#include "Player.h"

void Player::performAttack()
{
	attackBehavior->attack();
}

void Player::setAttackBehavior(AttackBehavior *behavior)
{
	this->attackBehavior = behavior;
}