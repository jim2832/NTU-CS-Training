/*
小練習 說明
請撰寫一程式，可以令使用者輸入一整數n，算出n階乘的結果
並撰寫一個可以計算123…*n的n!函式fact置於同一程式之中 並呼叫使用此函式利用此函式計算出結果，在程式中將此回傳值印出，請確保此函式可以被重複呼叫使用而不會錯誤。
Python: def fact(n):，Type Hint:def fact(n: int)->int:
C/C++: int fact(int n);
最後回傳一整數為n階乘的結果
在程式中將此回傳值印出

Input Format
數字n (0<=n<=10)

Output Format
1乘到 n 的總和

Sample Input
5
Sample Output
120
Hint
加總用的變數，請務必初始化
數字做乘法只要乘到0即會變成0
※函式的設計(名稱、傳入參數個數與回傳值)務必要和題目相同，否則將有可能無法通過批改！
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int fact(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}

int main(void){
    int n;
    cin >> n;

    cout << fact(n) << endl;
    
    return 0;
}