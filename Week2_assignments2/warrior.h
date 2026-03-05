#pragma once
#include"player.h"

class Warrior : public Player
{
public:
	Warrior(string nickname);
	~Warrior();
	void attack();
private:

};