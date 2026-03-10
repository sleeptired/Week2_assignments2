#include "thief.h"
#include"Monster.h"
Thief::Thief(string nickname) : Player(nickname)
{

}

void Thief::attack() 
{
	cout << "´Ü°ËÀ¸·Î Âî¸¨´Ï´Ù" << endl;
}

void Thief::attack(Monster* monster) 
{
	cout << "ÇÃ·¹ÀÌ¾î°¡ ´Ü°ËÀ¸·Î Âî¸¨´Ï´Ù!" << std::endl;
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