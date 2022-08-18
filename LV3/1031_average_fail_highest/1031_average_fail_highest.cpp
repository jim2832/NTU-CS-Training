/*
說明
輸入班上3位同學分數, 求出它們的平均值
印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)
印出其中最高分同學之分數

Input Format
一行3個整數，中間以空白間隔
整數1 整數2 整數3

Output Format
第一行分數平均，印到小數點後2位(注意中間的空白)
第二行為fail:字樣
第三行之後為不及格的同學之號碼與分數(注意中間的空白)
之後印出highest:之後一行印出最高分同學之號碼(從1起算)與分數

Sample Input
40 60 50
Sample Output
avg = 50.00
fail:
1: 40
3: 50
highest:
2: 60
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int score[3];
    double avg = 0, sum = 0, max = 0, max_index;

    for(int i=0; i<3; i++){
        cin >> score[i];
        sum += score[i];
        if(max < score[i]){
            max = score[i];
            max_index = i + 1;
        }
    }

    avg = (double)sum/3;
    printf("avg = %.2f\n", avg);

    cout << "fail:" << endl;

    for(int i=0; i<3; i++){
        if(score[i] < 60){
            cout << i + 1 << ": " << score[i] << endl;
        }
    }

    cout << "highest:" << endl << max_index << ": " << max << endl;
    
    return 0;
}