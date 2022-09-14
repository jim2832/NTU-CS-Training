/*
說明
想要知道年份所對應的天干地支，如：2010年是庚寅年。
天干：['甲','乙','丙','丁','戊','己','庚','辛','壬','癸']
地支：['子','丑','寅','卯','辰','巳','午','未','申','酉','戌','亥']



計算公式如下：
天干位置=(西元年-3)/10 取餘數
地支位置=(西元年-3)/12 取餘數


例如：2010年-3，為2007
天干=2007/10 取餘數為 7 -->天干數來第7個為"庚"
地支=2007/12 取餘數為 3 -->地支數來第3個為"寅"


現在我們要建立一個函數def YEAR(lst)，必須傳入list進去。
list裡面各個元素都是西元年的字串。
在函數的運算之下，我們可以算出各個list中各元素的天干地支年。
如：
YEAR(['1993','1994','1894'])
可以在函式中列印出

1993 = 癸酉年
1994 = 甲戌年
1894 = 甲午年
*注意：此函數不需要回傳值。


Input Format
輸入一連串的西元年，值到q離開。

Output Format
西元年 = 天干地支年
...
...
...

Sample Input 1
1993
1994
1894
q
Sample Output 1
1993 = 癸酉年
1994 = 甲戌年
1894 = 甲午年
Sample Input 2
1999
2000
2001
q
Sample Output 2
1999 = 己卯年
2000 = 庚辰年
2001 = 辛巳年
Sample Input 3
1111
2222
3333
4444
5555
q
Sample Output 3
1111 = 辛卯年
2222 = 壬戌年
3333 = 癸巳年
4444 = 甲子年
5555 = 乙未年
Hint
C語言在上傳前請將檔案轉換成utf-8
步驟如下：
1.用「記事本」打開 *.c 程式碼 2.在記事本中點選 檔案->另存新檔 存檔編碼為 UTF-8 不會轉的可參閱下列影片
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

void year(int &len, int *arr){
    for(int i=0; i<len; i++){
        int sky = (arr[i]-3) % 10;
        int ground = (arr[i] -3) % 12;
        switch (sky){
        case 1:
            cout << arr[i] << " = " << "甲";
            break;
        case 2:
            cout << arr[i] << " = " << "乙";
            break;
        case 3:
            cout << arr[i] << " = " << "丙";
            break;
        case 4:
            cout << arr[i] << " = " << "丁";
            break;
        case 5:
            cout << arr[i] << " = " << "戊";
            break;
        case 6:
            cout << arr[i] << " = " << "己";
            break;
        case 7:
            cout << arr[i] << " = " << "庚";
            break;
        case 8:
            cout << arr[i] << " = " << "辛";
            break;
        case 9:
            cout << arr[i] << " = " << "壬";
            break;
        default:
            cout << arr[i] << " = " << "癸";
            break;
        }

        switch (ground){
        case 1:
            cout << "子";
            break;
        case 2:
            cout << "丑";
            break;
        case 3:
            cout << "寅";
            break;
        case 4:
            cout << "卯";
            break;
        case 5:
            cout << "辰";
            break;
        case 6:
            cout << "巳";
            break;
        case 7:
            cout << "午";
            break;
        case 8:
            cout << "未";
            break;
        case 9:
            cout << "申";
            break;
        case 10:
            cout << "酉";
            break;
        case 11:
            cout << "戌";
            break;
        default:
            cout << "亥";
            break;
        }
        cout << "年" << endl;
    }
}

int main(void){
    string temp;
    int input[50];
    int len = 0;

    while(true){
        cin >> temp;
        if(temp == "q"){
            break;
        }
        input[len] = atoi(temp.c_str());
        len++;
    }

    year(len, input);
    
    return 0;
}