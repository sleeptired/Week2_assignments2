#include"magician.h"
#include"Monster.h"
Magician::Magician(string nickname) : Player(nickname)
{

}

void Magician::attack() 
{
	cout << "마법 공격을 합니다" << endl;
}

void Magician::attack(Monster* monster) 
{
	cout << "마법 공격을 합니다!" << std::endl;
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