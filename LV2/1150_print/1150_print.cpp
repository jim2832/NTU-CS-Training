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
請輸入一整數N做為之後的輸入次數
接下來可輸入N個整數
並在輸入每一個整數後印出該整數含一換行
和與之相同數量的換行符號(\n) 並在最後輸出"--------------------\n"做為結束

Input Format
整數N
整數1
整數2
...
整數n

Output Format
整數1+'\n'
(輸出 整數1 個換行符號(\n))
整數2+'\n'
(輸出 整數2 個換行符號(\n))
...
整數 n+'\n'
(輸出 整數n 個換行符號(\n))
輸出20個減字號(-)後加一換行符號(\n)做為結束

Sample Input 1
3
3
2
1
Sample Output 1
3
 
 
 
2
 
 
1
 
--------------------
Sample Input 2
2
5
2
Sample Output 2
5
 
 
 
 
 
 
2
 
 
--------------------
Hint
注意python的print()內建的換行
本題輸入與輸出會交錯如下：

[input ]2
[input ]5
[output]5
[output]
[output]
[output]
[output]
[output]
[input ]2
[output]2
[output]
[output]
[output]--------------------

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, input;

    cin >> N;
    for(int i=0; i<N; i++){
        cin >> input;
        cout << input << endl;
        for(int j=0; j<input; j++){
            cout << endl;
        }
    }
    cout << "--------------------" << endl;
    
    return 0;
}