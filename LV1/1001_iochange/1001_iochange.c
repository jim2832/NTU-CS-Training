/*
說明
請撰寫一程式，令使用者可以用鍵盤輸入任意的二個整數，再將它交換順序後由螢幕輸出
注意不可輸出多餘文字如空白、說明文字 等

Input Format
整數1
整數2

Output Format
整數2
整數1

Sample Input
1
2
Sample Output
2
1
Hint
※注意，是可以讓使用者輸入任意的2個整數，而非固定的1和2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d\n", num2);
    printf("%d\n", num1);
    
    return 0;
}