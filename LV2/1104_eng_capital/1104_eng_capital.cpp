/*
說明
輸入一個金額1~9999999整數, 印出英文數字金額
英文1~9: one two three four five six seven eight nine
英文10~90: ten twenty ... ninety 需要印出單位: hundred thousand million
最後要印出"dollar(s)"
輸入錯誤數值範圍,顯示錯誤後程式直接結束

Input Format
一整數n

Output Format
結果

Sample Input
1234567
Sample Output
one million two hundred thirty four thousand five hundred sixty seven dollars
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

string output_number(int &input){
    switch(input){
        case 1:
            return "one";
            break;

        case 2:
            return "two";
            break;

        case 3:
            return "three";
            break;

        case 4:
            return "four";
            break;

        case 5:
            return "five";
            break;

        case 6:
            return "six";
            break;

        case 7:
            return "seven";
            break;

        case 8:
            return "eight";
            break;

        case 9:
            return "nine";
            break;
        
        default:
            return NULL;
            break;
        }
}

int main(void){
	int input;
    int output[7];
    
    cin >> input;
    
    //非法輸入
	if(input > 9999999 || input == 0){
	    cout << "out of range" << endl;
	    return 0;
	}

    //個位數
    if(input >= 1 && input <= 9){
        output_number(input);
    }

    //百萬位
    if(input >= 1000000){
        output[0] = (input/(int)pow(10, 6)) % 10;
        cout << output[0] << " million";
    }

    //十萬、萬、千位
    for(int i=1; i<4; i++){
        output[i] = (input/(int)pow(10,6-i))%10;
        output_number(output[i]);
    }
    
    if(input == 1){
        cout << " dollar" << endl;
    }
    else{
        cout << " dollars" << endl;
    }
	return 0;
}