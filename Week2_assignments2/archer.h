#pragma once
#include"player.h"

class Archer : public Player
{
public:
	Archer(string nickname);
	~Archer();
	void attack();
	void attack(Monster* monster);
private:

};