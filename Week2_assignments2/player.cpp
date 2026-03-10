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


void Player::setHP(int HP)
{
    this->HP = HP;
}

