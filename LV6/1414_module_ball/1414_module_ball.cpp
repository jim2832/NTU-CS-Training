/*
說明
已知計算一個球體的體積公式為：(4/3)πr^3
(三分之四 圓周率 球半徑的立方(3次方) )

請使用者輸入一個數字，叫做n1。
並利用模組"math"來計算： 此數(n1)為球半徑的球體積。
(圓周率：使用math內建的圓周率，不要直接用3.14，算完後再四捨五入)


Input Format
int or float

Output Format
球體積 (四捨五入致小數點第3位)

Sample Input 1
10
Sample Output 1
4188.790
Sample Input 2
2
Sample Output 2
33.510
Sample Input 3
20.7
Sample Output 3
37153.493
Hint
四捨五入可以直接用浮點數的格式化輸出，或是使用round()函數。
引入math來計算。
C/C++可能不需要用到模組，C99 沒有 M_PI 可以使用，須自行訂義PI
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#define PI 3.141592653589793
using namespace std;

int main(void){
    double n1;
    double area;
    cin >> n1;

    area = (double)PI * pow(n1,3);
    area = (double)area * 4;
    area = (double)area / 3;
    printf("%.3lf\n", area);
    
    return 0;
}