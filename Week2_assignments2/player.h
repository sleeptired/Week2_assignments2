#pragma once
#include <string>
#include<iostream>
using namespace std;

class Monster;

class Player {
public:
    Player(string nickname);

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();


    int getHP();
    int getAtk();
    int getDef();
    string getnickname();

    // setter ÇÔ¼ö
    void setHP(int HP);
    void setStatus();

protected:
    string nickname;
    //string job_name;
    int HP;
    int atk;
    int def;
    //int accuracy;
    int speed;
};
