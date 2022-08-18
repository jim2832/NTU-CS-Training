/*
Task Description
編寫一個程序報告數字$ N $出現在數字$ M $之中的出現次數。這些出現可能重疊。
限制 $10 \le N \le 99$ $1000000 \le M \le 9999999$
Input Format
編寫一個程序報告數字$ N $出現在數字$ M $之中的出現次數。
數字$ N $介於10到99之間，數字$ M $的數量在1000000和9999999之間。
Output Format
輸出只有一個數字，即N出現`M的次數。
Sample input
90 9090999
Sample output
2
Sample input
11 1110111
Sample output
4

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int target, number;
    cin >> target >> number;
    int target_tens, target_ones, number_digit[7];
    int count = 0;
    
    //分解target
    target_ones = target % 10;
    target /= 10;
    target_tens = target % 10;

    //分解number
    for(int i=6; i>=0; i--){
        number_digit[i] = number % 10;
        number /= 10;
    }

    for(int i=0; i<6; i++){
        if(number_digit[i] == target_tens && number_digit[i+1] == target_ones){
            count++;
        }
    }

    cout << count;
    
    return 0;
}