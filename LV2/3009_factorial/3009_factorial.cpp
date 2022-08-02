/*
小練習 說明
請撰寫一程式，可以令使用者輸入一整數n
算出n階乘的結果

Input Format
數字n(0<=n<=12)

Output Format
1乘到 n 的總和

Sample Input
5
Sample Output
120
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, fac = 1;
    cin >> n;

    for(int i=1; i<=n; i++){
        fac *= i;
    }
    cout << fac << endl;
    
    return 0;
}