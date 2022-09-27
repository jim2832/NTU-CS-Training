#include "Pokemon.h"
#include <iostream>
#include <string>
using namespace std;

void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/" << HpMax << endl << endl;
}