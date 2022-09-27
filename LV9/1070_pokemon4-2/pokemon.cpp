#include <iostream>
#include "pokemon.h"
using namespace std;

void InputData(struct Pokemon &p){
    cin >> p.Name;
    cin >> p.Lv;
    cin >> p.Hp;
}

void ShowInfo(struct Pokemon p){
    cout << "Name: " << p.Name << endl;
    cout << "Lv: " << p.Lv << endl;
    cout << "HP: " << p.Hp << endl << endl;
}