#pragma once
#include"player.h"

class Magician : public Player
{
public:
	Magician(string nickname);
	~Magician();
	void attack();
	void attack(Monster* monster);
private:

};