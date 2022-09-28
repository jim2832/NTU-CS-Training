#include<iostream>
#include "square.h"
using namespace std;

Square::Square(){
    len = 0;
}

Square::Square(int n){
    if(n < 1){
        cout << "len setting error" << endl;
        len = 1;
        return;
    }

    len = n;
}

int Square::area(){
    int area = len * len;
    return area;
}

int Square::getLen(){
    return len;
}

void Square::setLen(int n){
    if(n < 1){
        cout << "len setting error" << endl;
        len = 1;
        return;
    }
    
    len = n;
}
