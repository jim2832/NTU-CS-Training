/*
說明
用多個指標配置出不同行數之二維陣列

常見應用: 固定三個班級，每班人數不同，輸入成績

Input Format
數字1 數字2 數字3 數字4 數字5 數字6

Output Format
數字1
數字2 數字3
數字4 數字5 數字6
(每個數字後都須加一空白)

Sample Input
10 20 30 40 50 60
Sample Output
10
20 30
40 50 60
Hint
No Hint
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
#define CLASS 3
using namespace std;

int main(void){
    int *a[3]; // 宣告3個可以指向整數的指標變數

    a[0] = (int *)malloc(sizeof(int));
    a[1] = (int *)malloc(sizeof(int) * 2);
    a[2] = (int *)malloc(sizeof(int) * 3);

    for(int i=0; i<3; i++){
        for(int j=0; j<=i; j++){
            cin >> a[i][j];
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<=i; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}