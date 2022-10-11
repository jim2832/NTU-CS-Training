#include <iostream>
#include "Pokemon.h"
using namespace std;

void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/" << HpMax << endl << endl;
}

void Pokemon::Attack(Pokemon &Target){
    if(HpCur == 0){
        cout << Name << " is unable to attack." << endl;
        return;
    }
    if(Target.HpCur == 0){
        cout << Name << " cannot attack fainted target " << Target.Name << "." << endl;
        return;
    }
    cout << Name << " Attack " << Target.Name << " " << Lv << " Points." << endl;
    Target.Defence(Lv);
}

void Pokemon::Defence(int n){
    HpCur -= n;
    if(HpCur <= 0){
        cout << Name << " is fainted." << endl;
        HpCur = 0;
    }
}

void Pokemon::Cure(){
    HpCur = HpMax;
    cout << Name << " has restore health." << endl;
}

void Pokemon::setData(string name, int lv, int hp){
    //set name
    if(name == "" || name == " " || name == ","){
        cout << "Name can't be empty." << endl;
        Name = "No Name";
    }
    else{
        Name = name;
    }

    //set level
    if(lv < 1){
        cout << "Lv setting error." << endl;
        Lv = 1;
    }
    else{
        Lv = lv;
    }

    //set hp
    if(hp < 1){
        cout << "Hp setting error." << endl;
        HpCur = 1;
        HpMax = 1;
    }
    else{
        HpCur = hp;
        HpMax = hp;
    }
}