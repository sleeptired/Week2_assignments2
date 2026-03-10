#pragma once
#pragma once
#include <string>
#include<iostream>
using namespace std;

class Player;

class Monster {
public:
    Monster();
    void attack(Player* p_ptr);
    int getHp();
    int getdef();
    int getatk();
    string getname();
    void setHP(int HP);
    void setStatus();

protected:
    string name = "";
    int hp = 0, atk = 0, def = 0, speed = 0;

};