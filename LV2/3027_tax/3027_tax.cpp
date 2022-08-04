/*
說明
就這樣小明快樂工作了一年后，發現自己需要繳稅了 QQ。
但是小明不清楚自己的需要繳多少錢，
請你根據以下這個表來幫忙小明解決他稅務上的問題。
小明只知道自己的綜合所得淨額 Ｎ，
請幫他找出他的稅率Ｊ、稅金Ｋ、累進差額Ｌ、還有今年應納稅額Ｍ。
綜合所得稅速算公試表

alt text
alt text

已知
Ｋ＝Ｎ＊Ｊ。
Ｍ＝Ｋ－Ｌ。
Input Format
輸入一個整數 N, 代表小明的綜合所得淨額。

Output Format
整數J% 整數K 整數L 整數M
(每個輸出後包含一空白)

Sample Input
2000000
Sample Output
20% 400000 134600 265400
Hint
請注意空格和空行。
計算累進差額補充資料。
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, K, L, M;
    double J, percent;
    cin >> N;

    // K = N * J;
    // M = K - L;

    if(N >= 0 && N<=540000){
        J = 5;
        L = 0;
    }
    else if(N >= 540001 && N <= 1210000){
        J = 12;
        L = 37800;
    }
    else if(N >= 1210001 && N <= 2420000){
        J = 20;
        L = 134600;
    }
    else if(N >= 2420001 && N <= 4530000){
        J = 30;
        L = 376600;
    }
    else if(N >= 4530001 && N <= 10310000){
        J = 40;
        L = 829600;
    }
    else{
        J = 45;
        L = 1345100;
    }

    cout << J << "%" << " ";
    J /= 100;
    K = N * J;
    M = K - L;
    cout << K << " " << L << " " << M << " ";
    
    return 0;
}