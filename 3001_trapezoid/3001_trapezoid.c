/*
說明

請算出此梯型面積
上底：10cm
下底：15cm
高：7cm

Input Format
沒有輸入

Output Format
輸出結果

Sample Input
 
Sample Output
15 (此答案為示意用，非答案)
Hint
如果是使用C語言的，請輸出到小數點後第1位ex:77.5
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int up = 10, down = 15, h = 7;
    double area;

    area = (double)(up + down) * h /2;

    printf("%.1f", area);
    
    return 0;
}