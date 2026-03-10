#include "Player.h"
#include "Monster.h"
Player::Player(string nickname) : nickname(nickname), HP(10), atk(30), def(10), speed(10)
{
}
void Player::printPlayerStatus()
{
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "HP: " << HP << endl;
    cout << "공격력: " << atk << endl;
    cout << "방어력: " << def << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;

}

int Player::getHP()
{
    return this->HP;
}

int Player::getAtk()
{
    return this->atk;
}

int Player::getDef()
{
    return this->def;
}

string Player::getnickname()
{
    return this->nickname;
}

void Player::setHP(int HP)
{
    this->HP = HP;
}

void Player::setStatus()
{
    while (true)
    {
        std::cout << "Player HP를 입력해주세요 : ";
        cin >> this->HP;

        if (cin.fail())
        {
            std::cout << "[경고] 숫자가 아닌 잘못된 값이 입력되었습니다!" << std::endl;

            cin.clear();             
            cin.ignore(100, '\n'); 

            continue;
        }

        if (this->HP > 0) 
        {
            break; 
        }
        std::cout << "HP는 1 이상이어야 합니다. 다시 입력해주세요." << std::endl;
    }

    while (true)
    {
        std::cout << "Player 공격력을 입력해주세요 : ";
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
        std::cout << "Player 방어력을 입력해주세요 : ";
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

