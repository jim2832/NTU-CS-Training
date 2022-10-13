#include <iostream>
#include "Pokemon.h"
using namespace std;

//constructor
Pokemon::Pokemon(){
    Name = "No Name";
    Lv = 1;
    HpCur = 1;
    HpMax = 1;
    items = new std::string[Lv]; //dynamic allocation
    itemNum = 0;
}

//constructor2
Pokemon::Pokemon(std::string na, int lv, int hp){
    setData(na,lv, hp);
    items = new std::string[Lv]; //dynamic allocation
}

Pokemon::~Pokemon(){
    cout << Name << " has returned to the nature." << endl;
    delete[] items;
}

void Pokemon::addItem(std::string item){
    if(itemNum == Lv){
        cout << Name << " is full, cannot carry " << item << "." << endl;
        return;
    }
    items[itemNum] = item;
    itemNum++;
}

void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/" << HpMax << endl;
    cout << "Items: ";
    for(int i=0; i<itemNum; i++){
        cout << items[i] << " ";
    }
    cout << endl << endl;
}

void Pokemon::Attack(Pokemon &tg){
    if(HpCur == 0){
        cout << Name << " is unable to attack." << endl;
        return;
    }
    if(tg.HpCur == 0){
        cout << Name << " cannot attack fainted target " << tg.Name << "." << endl;
        return;
    }
    cout << Name << " Attack " << tg.Name << " " << Lv << " Points." << endl;
    tg.Defence(Lv);
}

void Pokemon::Defence(int atkp){
    HpCur -= atkp;
    if(HpCur <= 0){
        cout << Name << " is fainted." << endl;
        HpCur = 0;
    }
}

void Pokemon::Cure(){
    HpCur = HpMax;
    cout << Name << " has restore health." << endl;
}

void Pokemon::setData(std::string na, int lv, int hp){
    //set name
    if(na == "" || na == " " || na == ","){
        cout << "Name can't be empty." << endl;
        Name = "No Name";
    }
    else{
        Name = na;
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