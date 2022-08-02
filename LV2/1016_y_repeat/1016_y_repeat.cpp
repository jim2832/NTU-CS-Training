/*
說明
輸入鍵盤按鍵，讓使用者按下y才執行程式並再輸出run<> 執行完後，可再輸入一次，按下y可重覆執行，其它按鍵則結束程式。

Input Format
y
y
...
其它字元

Output Format
run
run
...

Sample Input
y
y
a
Sample Output
run
run
Hint
C語言的scanf
由鍵盤讀入一字元至一字元變數中
char c;
scanf("%c",&c);
請注意：如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
 
char c;
scanf("　%c",&c);
本題的輸入與執行過程會交雜在一起，如下

y
run
y
run
n
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    string input;

    while(true){
        cin >> input;
        if(input == "y"){
            cout << "run" << endl;
        }
        else{
            break;
        }
    }
    
    return 0;
}