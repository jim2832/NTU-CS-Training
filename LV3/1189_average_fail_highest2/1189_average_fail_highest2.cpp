/*
說明
輸入1整數N為班上同學人數(0<N<=1000)
接著輸入班上N位同學的分數score(0<=score<=100)後, 求出它們的平均值
印出不及格的同學之座號(從1起算)與分數(若無不及格的同學也會印出fail:)
印出其中最高分同學之分數與座號(從1起算)，若有多個最高同分，請印第一個

Input Format
第一行為一整數N
第二行為學生的成績，每個數字以空白間隔：整數1 整數2 ... 整數N

Output Format
分數平均
不及格的同學之號碼與分數
最高分同學之座號(從1起算)與分數

Sample Input
3
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
    int n;
    cin >> n;

    int score[n];
    double avg = 0, sum = 0, max = 0, max_index;

    for(int i=0; i<n; i++){
        cin >> score[i];
        sum += score[i];
    }

    for(int i=0; i<n; i++){
        if(max < score[i] && score[i] != max){
            max = score[i];
            max_index = i + 1;
        }
    }

    avg = (double)sum/n;
    printf("avg = %.2f\n", avg);

    cout << "fail:" << endl;

    for(int i=0; i<n; i++){
        if(score[i] < 60){
            cout << i + 1 << ": " << score[i] << endl;
        }
    }

    cout << "highest:" << endl << max_index << ": " << max << endl;
    
    return 0;
}