/*
小練習 說明
請撰寫一程式，可以令使用者輸入一大於0的整數n
算出1加到n的結果

Input Format
數字n

Output Format
1加到 n 的總和

Sample Input
5
Sample Output
15
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, sum = 0;
    cin >> n;

    for(int i=1; i<=n; i++){
        sum += i;
    }

    cout << sum << endl;
    
    return 0;
}