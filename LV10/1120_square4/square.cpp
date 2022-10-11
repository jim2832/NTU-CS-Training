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
    return len * len;
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

void cmpSquare(Square &q1, Square &q2){
    if(q1.area() < q2.area()){
        cout << "1<2" << endl;
    }
    else if(q1.area() > q2.area()){
        cout << "1>2" << endl;
    }
    else{
        cout << "1==2" << endl;
    }
}
