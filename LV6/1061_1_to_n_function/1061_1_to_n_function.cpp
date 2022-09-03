/*
小練習 說明
請撰寫一程式，可以令使用者輸入一大於0的整數n，算出1加到n的結果
此程式，內含一可以計算1+2+3…+n的函式sum1
Python: def sum1(n):，Type Hint:def sum1(n: int)->int:
C/C++: int sum1(int n);
可以回傳一整數為1到n加總之和，並呼叫使用此函式，在程式中將此回傳值印出，請確保此函式可以被重複呼叫使用而不會錯誤。

Input Format
數字n(0<=n<=10)

Output Format
1加到 n 的總和

Sample Input
5
Sample Output
15
Hint
加總用的變數，請務必初始化
小心不要誤用全域變數造成函式無法正確重複使用
※函式的設計(名稱、傳入參數個數與回傳值)務必要和題目相同，否則將有可能無法通過批改！
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum1(int n);

int main(void){
    int n;
    cin >> n;

    cout << sum1(n);
    
    return 0;
}

int sum1(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}