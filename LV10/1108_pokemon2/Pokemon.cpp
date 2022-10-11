#include <iostream>
#include "Pokemon.h"
using namespace std;

void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/" << HpMax << endl << endl;
}

void Pokemon::Attack(Pokemon &Target){
    Target.HpCur -= Lv;
    cout << Name << " Attack " << Target.Name << " " << Lv << " Points." << endl;
}

void Pokemon::Defence(int atkp){
    if(HpCur < 0){
        HpCur = 0;
    }
}

void Pokemon::Cure(){
    HpCur = HpMax;
    cout << Name << " has restore health." << endl;
}