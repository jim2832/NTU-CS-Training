/*
說明
台北市公館大學某系某科的段考特別難，老師決定幫大家調分，調分規則如下：
原始分數開根號乘以10


使用者輸入分數，並列印出原始分數以及調分後的分數

Input Format
整數(int)或幅點數(float)

Output Format
Original: 分數 (小數點後2位)
Adjusted: 分數(+差幾分(四捨五入至整數)) (小數點後2位)

Sample Input 1
36
Sample Output 1
Original: 36.00
Adjusted: 60.00(+24)
Sample Input 2
50
Sample Output 2
Original: 50.00
Adjusted: 70.71(+21)
Hint
1. 引入math模組來計算根號 math.sqrt()
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int score;
    double origin, adjust, diff;
    scanf("%d", &score);

    origin = (double)score;
    adjust = sqrt(origin) * 10;

    //calculate different
    diff = adjust - origin;

    if(diff - floor(diff)>=0.5){
        diff = (int)floor(diff) + 1;
    }
    else{
        diff = (int)floor(diff);
    }
    
    //print out the result
    printf("Original: %.2f\n", origin);
    printf("Adjusted: %.2f(+%d)\n", adjust, (int)diff);
    return 0;
}