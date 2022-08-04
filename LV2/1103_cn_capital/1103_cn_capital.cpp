/*
說明
輸入一個金額1~99999整數, 印中文大寫數字金額
中文大寫1~9: 壹,貳,參,肆,伍,陸,柒,捌,玖
需要印出單位: 萬,仟,佰,拾
不需輸出"零"
最後要印出"元整"
輸入錯誤數值範圍,顯示「out of range」後程式直接結束(請不要印出「」)
輸入輸出格式 (請不要印出輸入提示文字「請輸入金額：」等文字)

Input Format
一整數n

Output Format
結果

Sample Input
12345
Sample Output
壹萬貳仟參佰肆拾伍元整
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
	int input;
    int output[5];
    
    cin >> input;

	if(input>99999 || input==0){
	    cout << "out of range" << endl;
	    return 0;
	}
 
    for(int i=0;i<5;i++){
        output[i]=(input/(int)pow(10,4-i))%10;
 
            switch(output[i]){
                case 1:
                    printf("壹");
                    break;
                case 2:
                    printf("貳");
                    break;
                case 3:
                    printf("參");
                    break;
                case 4:
                    printf("肆");
                    break;
                case 5:
                    printf("伍");
                    break;
                case 6:
                    printf("陸");
                    break;
                case 7:
                    printf("柒");
                    break;
                case 8:
                    printf("捌");
                    break;
                case 9:
                    printf("玖");
                    break; 
                default:
                    continue;
                    break;
            }
            switch(i){
                case 0:
                    printf("萬");
                    break;
                case 1:
                    printf("仟");
                    break;
                case 2:
                    printf("佰");
                    break;
                case 3:
                    printf("拾");
                    break;                    
            }
    }
    printf("元整");
	return 0;
}