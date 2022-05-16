/*
說明
請撰寫一程式，印出二位同學的姓名、座號與分數：
每行文字中的每個欄位之間請用一個tab間距隔開(\t)
每行文字以一個換行結尾(\n)
※每列文字中間及最後，除上述指定的間隔與結束符號外，無其他多餘的空白或不可見字元(例如空白,\n,\r,\t,\u3000)

Name    No.   Score
John    20    40
Andy    21    100
Input Format
無輸入

Output Format
如範例

Sample Output
Name    No.   Score
John    20    40
Andy    21    100
Hint
請按照題目要求輸出
請勿直接復製Sample Output貼上列印，一定會WA
使用Python的同學請注意自己的換行，不要多寫了
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    printf("Name\tNo.\tScore\n");
    printf("John\t20\t40\n");
    printf("Andy\t21\t100\n");
    
    return 0;
}