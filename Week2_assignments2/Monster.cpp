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

string Monster::getname()
{
    return this->name;
}

void Monster::setHP(int HP)
{
	this->hp = HP;
}

void Monster::setStatus() 
{
    cout << "* 몬스터 이름을 입력해주세요: ";
    cin >> this->name;

    while (true)
    {
        std::cout << "Monster HP를 입력해주세요 : ";
        cin >> this->hp;
        if (cin.fail())
        {
            std::cout << "[경고] 숫자가 아닌 잘못된 값이 입력되었습니다!" << std::endl;

            cin.clear();
            cin.ignore(10000, '\n');

            continue;
        }

        if (this->hp > 0)
        {
            break;
        }
        std::cout << "Monster는 1 이상이어야 합니다. 다시 입력해주세요." << std::endl;
    }

    while (true)
    {
        std::cout << "Monster 공격력을 입력해주세요 : ";
        cin >> this->atk;
        if (cin.fail())
        {
            std::cout << "[경고] 숫자가 아닌 잘못된 값이 입력되었습니다!" << std::endl;

            cin.clear();
            cin.ignore(10000, '\n');

            continue;
        }

        if (this->atk > 0)
        {
            break;
        }
        std::cout << "공격력은 1 이상이어야 합니다. 다시 입력해주세요." << std::endl;
    }

    while (true)
    {
        std::cout << "Monster 방어력을 입력해주세요 : ";
        cin >> this->def;
        if (cin.fail())
        {
            std::cout << "[경고] 숫자가 아닌 잘못된 값이 입력되었습니다!" << std::endl;

            cin.clear();
            cin.ignore(10000, '\n');

            continue;
        }

        if (this->def >= 0)
        {
            break;
        }
        std::cout << "방어력은 0 이상이어야 합니다. 다시 입력해주세요." << std::endl;
    }
}