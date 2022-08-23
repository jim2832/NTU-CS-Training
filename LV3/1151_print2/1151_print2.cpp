/*
說明
標準輸出看似非常簡單，但在末熟悉之前常常會鬧出一些烏龍
有時會開始懷疑，是不是題目出錯了？
而在機緣巧合之下，不小心對了，更是會認為題目出錯了(XD)
不同語言的標準輸出方式更是不同，如:

C: printf()
C++: cout <<
Python:print()/sys.stdout.write() 其中python的print()內建\n因很容易使用便會初學者誤會
(加上print()使用簡單 從影片播放流量中得知 很多人這一章節的教學都是跳過的><)
因此設計這題幫助大家熟悉與習慣標準輸出
請連續輸入N個整數直到輸入-1結束
之後依輸入順序，倒序輸出原先輸入的數字含一換行
和與之相同數量的換行符號(\n) 並在最後輸出"--------------------\n"做為結束

Input Format
整數1
整數2
...
整數N

Output Format
整數N+'\n'
(輸出 整數N 個換行符號(\n))
整數N-1+'\n'
(輸出 整數N-1 個換行符號(\n))
...
整數1+'\n'
(輸出 整數1 個換行符號(\n))
輸出20個減字號(-)後加一換行符號(\n)做為結束

Sample Input 1
1
2
3
-1
Sample Output 1
3
 
 
 
2
 
 
1
 
--------------------
Sample Input 2
2
5
-1
Sample Output 2
5
 
 
 
 
 
2
 
 
--------------------
Hint
注意python的print()內建的換行
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int count = 0;
    int input[20];

    for(int i=0; i<20; i++){
        cin >> input[i];
        if(input[i] == -1){
            break;
        }
        count++;
    }

    for(int i=count-1; i>=0; i--){
        cout << input[i];
        for(int j=0; j<=input[i]; j++){
            cout << endl;
        }
    }

    cout << "--------------------";
    
    return 0;
}