/*
說明
請撰寫一程式，令使用者可以輸入一4位數的數字N，並將每一位的數字加總後印出，例如： 輸入為 1234 答案為 1+2+3+4 => 10

Input Format
一個整數N，範圍為 999<N<10000

Output Format
一個整數(含換行)

Sample Input
1234
Sample Output
10
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int num; //input
    int tho, hun, ten, one;
    int sum; //output
    scanf("%d", &num);

    tho = num / 1000; //千位
    num %= 1000; //1234變234
    hun = num / 100; //百位
    num %= 100; //234變34
    ten = num / 10; //十位
    one = num % 10; //個位

    sum = tho + hun + ten + one;

    printf("%d", sum);

    return 0;
}