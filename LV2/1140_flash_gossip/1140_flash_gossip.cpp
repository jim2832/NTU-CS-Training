/*
說明
 
Flash 閃電俠，世界最快的男人。
有一個傳言，有人說Flash的移動是不連續的，擁有空間跳躍的能力。
爲了要證明Flash的行動軌跡是連續的，專家請來了Flash做實驗。
給予一個整數N 其中0<N<100000,他們要求Flash 跑到N 的位置再折返回來。
過程中都有相機記錄Flash 的位置，請輸出Flash的移動軌跡。
以證明Flash沒有空間跳躍的能力。
例子：
N=5
輸出："123454321\n" （不用空格）

Input Format
輸入一個整數N 0<N<10000.

Output Format
一串數字，Flash的移動軌跡。(沒有空格)
Sample Input 1
5
Sample Output 1
123454321
Sample Input 2
11
Sample Output 2
123456789101110987654321
Hint
請注意印出答案后要換行。
中間沒空格。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        cout << i;
    }
    for(int i=n-1; i>=1; i--){
        cout << i;
    }
    cout << endl;
    
    return 0;
}