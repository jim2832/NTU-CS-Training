/*
Task Description
請撰寫一程式可以令使用者輸入一介於 100~999之間的數字，並於每一行之中單獨輸出每一位數字，共三行，每一行結尾都要加換行符號，且無空白穿插其中。
Input Format
一行介於 100~999之間的數字
Output Format
有三行輸出，每行之中都是一個數字。
Sample Input
123
Sample Output
1
2
3
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int num, ones, tens, huns;
    scanf("%d", &num);

    ones = num % 10; //個位
    num /= 10; // 123變12
    tens = num % 10; //十位
    huns = num / 10; //百位

    printf("%d\n", huns);
    printf("%d\n", tens);
    printf("%d\n", ones);
    
    return 0;
}