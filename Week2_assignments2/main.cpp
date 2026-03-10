#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "Monster.h"
using namespace std;


void UIsystem()
{
    std::cout << "=============================================" << std::endl;
    std::cout << "1. 공격" << std::endl;
    std::cout << "0. 나가기" << std::endl;
}


// 메인 함수
int main() {
    //필수 기능
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;//직업 고르기
    string nickname;//이름 저장
    bool GameLoop = true;
    int input_num = 0;
    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    player->attack();
    cout << "필수과제 구현 파트였습니다." << endl;


    player->printPlayerStatus();
    cout << "Monster가 등장했습니다!!" << endl;
    Monster* monster = nullptr;
    monster = new Monster();
    UIsystem();
    while (GameLoop)
    {
        std::cout << "번호를 선택해주세요: ";
        std::cin >> input_num;
        if (input_num == 1)
        {
            std::cout << "[플레이어의 턴]" << std::endl;
            player->attack(monster);
            if (monster->getHp() <= 0)
            {
                std::cout << "축하합니다! 전투에서 승리하셨습니다!" << std::endl;
                break; // 전투 종료
            }
            std::cout << "몬스터 남은 HP: " << monster->getHp() << std::endl;

            std::cout << "[몬스터의 턴]" << std::endl;
            monster->attack(player);
            if (player->getHP() <= 0)
            {
                std::cout << "플레이어가 쓰러졌습니다... 게임 오버." << std::endl;
                break; // 전투 종료
            }
            std::cout << "플레이어 남은 HP: " << player->getHP() << std::endl;
        }
        else if (input_num == 0)
        {
            std::cout << "게임을 종료했습니다." << std::endl;
            GameLoop = false;
        }
        else 
        {
            cout << "잘못된 입력입니다." << endl;
        }
    }
    cout << "도전과제 구현 파트였습니다." << endl;
    if (player != nullptr)
        delete player;
    if (monster != nullptr)
        delete monster;

    return 0;
}