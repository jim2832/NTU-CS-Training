/*
說明
用鍵盤輸入二個整數
使用參考寫一個MySwap函式，將兩個變數內容交換後輸出
本題為多檔案組合題
以下為系統中已準備好的檔案
main.cpp

#include <iostream>
#include "MySwap.h"
 
using namespace std;
 
int main(int argc, char** argv) {
 
    int n1, n2;
    cin >> n1 >> n2;
 
    MySwap(n1, n2);
 
    cout << n1 << endl << n2 << endl;
    return 0;
}
MySwap.h

#ifndef MYSWAP_H
#define MYSWAP_H
 
void MySwap(int &,int &);
 
#endif
請完成 MySwap.cpp後上傳

Input Format
整數1
整數2

Output Format
整數2
整數1

Sample Input
1
2
Sample Output
2
1
Hint
No Hint
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void MySwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}