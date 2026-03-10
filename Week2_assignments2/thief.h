#pragma once
#include"player.h"

class Thief : public Player
{
public:
	Thief(string nickname);
	~Thief();
	void attack();
	void attack(Monster* monster);
private:

};
