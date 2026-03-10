#include"Monster.h"
#include "Player.h"

Monster::Monster() :name("Monster"), hp(10), atk(30), def(10), speed(10)
{

}

void Monster::attack(Player* p_ptr)
{
	cout << "몬스터가 공격합니다." << std::endl;
	int damage = 0;
	damage = this->atk - p_ptr->getDef();

	if (damage > 0)
	{
		p_ptr->setHP(p_ptr->getHP() - damage);
	}
	else 
	{
		p_ptr->setHP(p_ptr->getHP() - 1);
	}
}

int Monster::getHp()
{
	return this->hp;
}

int Monster::getdef()
{
	return this->def;
}

int Monster::getatk()
{
	return this->atk;
}

void Monster::setHP(int HP)
{
	this->hp = HP;
}