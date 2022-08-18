/*
說明
輸入班上3位同學分數, 求出它們的平均值
印出不及格的同學之號碼與分數(若無不及格的同學也會印出fail:)

Input Format
一行3個整數，中間以空白間隔
整數1 整數2 整數3

Output Format
第一行分數平均，印到小數點後2位(注意中間的空白)
第二行為fail:字樣
第三行之後為不及格的同學之號碼與分數(注意中間的空白)

Sample Input
40 60 50
Sample Output
avg = 50.00
fail:
1: 40
3: 50
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int a, b, c;
    double avg = 0;
    cin >> a >> b >> c;

    avg = (double)(a+b+c)/3;
    printf("avg = %.2f\n", avg);

    cout << "fail:" << endl;

    if(a < 60){
        cout << "1: " << a << endl;
    }
    if(b < 60){
        cout << "2: " << b << endl;
    }
    if(c < 60){
        cout << "3: " << c << endl;
    }
    
    return 0;
}