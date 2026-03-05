#include "archer.h"
#include "magician.h"

Archer::Archer(string nickname) : Player(nickname)
{
}

void Archer::attack()
{
	cout << "화살 공격을 합니다" << endl;
}
