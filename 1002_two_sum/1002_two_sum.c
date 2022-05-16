/*
說明
請撰寫一程式，令使用者輸入兩個浮點數，印出兩者相加的過程與結果(※輸出小數後兩位)

Input Format
數字1
數字2

Output Format
輸出結果
※ 「+」號與「=」號左右各有一「空白」字元

Sample Input 1
5.1
2.3
Sample Output 1
5.10 + 2.30 = 7.40
Sample Input 2
5.1
2.3456
Sample Output 2
5.10 + 2.35 = 7.45
Hint
注意空白
本題要輸出到小數點後兩位，使用Python的同學可以先看「字串」章節的格式化輸出部份，才會比較簡單，可以先預習字串的章節。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double num1, num2, sum;
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    sum = num1 + num2;

    printf("%.2f + %.2f = %.2f\n", num1, num2, sum);
    
    return 0;
}