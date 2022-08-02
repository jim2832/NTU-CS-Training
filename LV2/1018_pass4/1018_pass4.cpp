/*
說明
寫個程式，判斷一個人的成績是否及格 (及格分數為60分)
令使用者輸入成績
並判斷其成績是否及格
每次判斷完成績後可輸入
'y': 繼續
其他: 離開

Input Format
成績
是否繼續

Output Format
pass或fail

Sample Input
50
y
90
y
30
n
Sample Output
fail
pass
fail
Sample IO
[input ]50
[output]fail
[input ]y
[input ]90
[output]pass
[input ]y
[input ]30
[output]fail
[input ]n
Hint
C語言的scanf
由鍵盤讀入一字元至一字元變數中
char c;
scanf("%c",&c);
請注意：如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
 
char c;
scanf("　%c",&c);
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int score;
    string input;
    cin >> score;

    if(score >= 60){
        cout << "pass" << endl;
    }
    else{
        cout << "fail" << endl;
    }

    while(true){
        cin >> input;
        if(input == "y"){
            cin >> score;
            if(score >= 60){
                cout << "pass" << endl;
            }
            else{
                cout << "fail" << endl;
            }
        }
        else{
            break;
        }
    }
    
    return 0;
}