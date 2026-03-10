#include "warrior.h"
#include"Monster.h"
Warrior::Warrior(string nickname) : Player(nickname)
{
}

void Warrior::attack() 
{
	cout << "°ËÀ» ÈÖµÎ¸¨´Ï´Ù!" << endl;
}

void Warrior::attack(Monster* monster)
{
	cout << "ÇÃ·¹ÀÌ¾î°¡ °ËÀ» ÈÖµÎ¸¨´Ï´Ù!" << std::endl;
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