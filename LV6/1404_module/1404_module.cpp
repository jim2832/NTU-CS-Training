/*
說明
請使用者輸入一個數字
Python使用者請利用模組"math"來計算：
(1) 此數開根號後立方(三次方)。
(2) 此數當作圓形的直徑，算圓面積。 (半徑半徑圓周率)
(圓周率：使用math內建的圓周率，不要直接用3.14，算完後再四捨五入)


C/C++使用者請自行定義PI

Input Format
整數或浮點數

Output Format
浮點數 (四捨五入致小數點第二位)
浮點數 (四捨五入致小數點第二位)

Sample Input 1
10
Sample Output 1
31.62
78.54
Sample Input 2
2
Sample Output 2
2.83
3.14
Sample Input 3
20.5
Sample Output 3
92.82
330.06
Hint
四捨五入可以直接用浮點數的格式化輸出，或是使用round()函數。
引入math來計算
C/C++可能不需要用到模組，C99 沒有 M_PI 可以使用，須自行訂義PI
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#define PI 3.14159265359
using namespace std;

int main(void){
    double num, num2, area;
    cin >> num;
    num2 = num;

    num = sqrt(num);
    num = pow(num, 3);
    printf("%.2f\n", num);

    num2 = (double)num2 / 2;
    area = pow(num2, 2) * PI;
    printf("%.2f\n", area);
    
    return 0;
}