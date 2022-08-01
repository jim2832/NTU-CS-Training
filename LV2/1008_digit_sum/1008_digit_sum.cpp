/*
請輸入一任意位數的數字，並將每一位的數字加總後印出，例如：
n = 1234567
ans = 1+2+3+4+5+6+7 = 28

Input Format
一個正整數

Output Format
一個整數(含換行)

Sample Input 1
1234567
Sample Output 1
28
Sample Input 2
12345
Sample Output 2
15
Hint
Compiler 為 C++98 使用atoi可能有問題
Python3.4 的環境下 eval("0123") 是會出現 SyntaxError 的
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, d, sum = 0;
    cin >> n;

    while(n > 0){
        d = n % 10;
        sum += d;
        n /= 10;
    }

    cout << sum;
    
    return 0;
}