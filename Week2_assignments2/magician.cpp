#include"magician.h"

Magician::Magician(string nickname) : Player(nickname)
{

}

void Magician::attack() 
{
	cout << "마법 공격을 합니다" << endl;
}