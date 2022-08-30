/*
說明
使用者可以輸入字元、字串並輸出測試

Input Format
本題有三行輸入如下：

字元
字串(不含空白)
字串(含空白)
Output Format
本題有三行輸出如下：

字元
字串(不含空白)
字串(含空白)
Sample Input
G
asdfQWER
This is an apple.
Sample Output
G
asdfQWER
This is an apple.
Hint
C語言的scanf
由鍵盤讀入一字元至一字元變數中
char c;
scanf("%c",&c);
請注意：如果 % 之前加一空格的話代表跳過所有空格 (TAB、 space、 及 Enter) 字元，例如：
 
char c;
scanf("　%c",&c);
scanf() 後面的 gets()問題
因為批改系統中無法使用fflush(stdin)來清除輸入
因此，在gets()前的scanf("%d", &n); 改寫成 scanf("%d ", &n)
在scanf中出現空白表示忽略所有空白字元（包含空白、換行、tab）
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    char input1;
    char input2[20], input3[20];

    cin >> input1;
    cin >> input2;
    cin.ignore();
    cin.getline(input3,20);

    cout << input1 << endl;
    cout << input2 << endl;
    cout << input3 << endl;
    
    return 0;
}