/*
Task Description
請撰寫一程式可以令使用者輸入三個整數 a,b,c 分別代表三角形的邊長。如果能拼成一個三角形，輸出 1，反之輸出 0。判斷三角形是否合法：任兩個邊長和大於第三邊。
Input Format
輸入中有三行。第一行是整數 a，第二行是整數 b，第三行是整數 c。
Output Format
輸出中有一行。如果長度有效為 1，否則輸出為 0。
Sample Input
1
2
3
Sample Output
0
Sample Input
2
4
3
Sample Output
1
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a+b>c && a+c>b && b+c>a){
        printf("1");
    }
    else{
        printf("0");
    }
    
    return 0;
}