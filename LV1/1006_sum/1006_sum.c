/*
說明
請撰寫一程式，令使用者可以輸入任意兩個整數，並印出兩者相加的結果

Input Format
數字1(整數)
數字2(整數)

Output Format
輸出兩數(整數)相加結果

Sample Input
5
2
Sample Output
7

Hint
注意是可以讓使用者輸入任意的2個整數，而非固定的2和5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int num1, num2, sum;
    scanf("%d", &num1);
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("%d", sum);
    return 0;
}