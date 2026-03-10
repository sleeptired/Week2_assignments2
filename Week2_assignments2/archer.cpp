#include "archer.h"
#include"Monster.h"

Archer::Archer(string nickname) : Player(nickname)
{
}

void Archer::attack()
{
	cout << "화살 공격을 합니다" << endl;
}

void Archer::attack(Monster* monster)
{
	cout << "플레이어가 화살 공격을 합니다!" << std::endl;
	int damage = 0;
	damage = this->atk - monster->getdef();

	if (damage > 0)
	{
		monster->setHP(monster->getHp() - damage);
	}
	else
	{
		monster->setHP(monster->getHp() - 1);
	}
}
