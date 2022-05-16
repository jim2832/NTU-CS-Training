/*
Task Description
寫一個程序以確定牛可以吃多少草。一條母牛的長度為C的繩子，繩索的另一端連接到寬度為a和深度b的矩形房屋的一角。請確定牛可以走動的區域。


Input
輸入有三個雙精度編號a，b和c的變數。

Output
輸出具有雙精度到小數點後第六位的格式。

Bounds
我們假設π=3.1415926。
0<a,b≤1000
c≤a+b

Sample input
10.0 10.0 5.0
Sample output
58.904861
Hint
Python使用者注意輸入格式，是一行之中有3個變數，中間以空白間隔，而非三行！
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415926

int main(void){
    double a, b, c, area;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(c<a && c<b){
        area = pow(c, 2) * PI *3/4;
    }
    else if(c>a && c<b){
        area = (pow(c, 2) * PI *3/4) + (pow(c-a, 2) * PI /4);
    }
    else if(c<a && c>b){
        area = (pow(c, 2) * PI *3/4) + (pow(c-b, 2) * PI /4);
    }
    else{
        area = (pow(c, 2) * PI *3/4) + (pow(c-a, 2) * PI /4) + (pow(c-b, 2) * PI /4);
    }

    printf("%.6f", area);
    
    return 0;
}