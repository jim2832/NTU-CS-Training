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

int cmpSquare(Square &q1, Square &q2){
    if(q1.len * q1.len > q2.len * q2.len){
        return 1;
    }
    else if(q1.len * q1.len < q2.len * q2.len){
        return -1;
    }
    else{
        return 0;
    }
}
