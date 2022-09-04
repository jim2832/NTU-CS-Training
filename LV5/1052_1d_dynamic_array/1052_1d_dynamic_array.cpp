/*
說明
使用者先輸入一班有幾個學生N，再一一輸入學生的考試成績scores (0<=scores<=50000)
求出它們的平均值
印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)
印出其中最高分同學之分數 (若有多筆最高分同分者，請列出索引值最小的)

Input Format
第一行為幾個學生N(3<=N<=600000)
第二行為學生分數，有N個，中間以空白間隔，EX: 整數1 整數2 整數3 ... 整數N

Output Format
第一行為分數平均，印出到小數點後2位(四捨五入)
第二行開始為fail:下一行列印不及格的同學之號碼與分數(冒號之後有一空格)
之後印出highest:下一行印出最高分同學之號碼與分數(冒號之後有一空格)

Sample Input
3
40 60 50
Sample Output
1
2
3
4
5
6
avg = 50.00
fail:
1: 40
3: 50
highest:
2: 60
Hint
注意各班資料的縮排(空白)
C/C++答題注意：

請用動態記憶體配置，否則無法通過本題
最後一筆測資若是直接加總會超過整數的範圍
所以要算平均的話可先讓分數除以總學生人數後再加總
注意資料型態空間夠大，並盡量縮小誤差
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(void){
    long int N, max = 0, max_pos = 0;
    double temp, avg = 0;
    cin >> N;
    long int *score = new long int[N];

    //input
    for(int i=0; i<N; i++){
        cin >> *(score + i);
        temp = (double)score[i]/N;
        avg += temp;
        if(max < *(score + i)){
            max = *(score + i);
            max_pos = i;
        }
    }

    printf("avg = %.2f\nfail:\n", avg);

    for(int i=0; i<N; i++){
        if(score[i] < 60){
            cout << i+1 << ": " << score[i] << endl;
        }
    }

    cout << "highest:" << endl << max_pos + 1 << ": " << max << endl;

    delete[] score;
    
    return 0;
}