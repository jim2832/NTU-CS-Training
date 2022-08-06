/*
主題
If else

說明
有一天 Tom and Jerry 要玩一個游戲，游戲叫做踩踏游戲。
他們打算在條長廊進行游戲。
長廊是由 N 個長度為一正方格組成。
Tom 會站在長廊的最左邊，Jerry 站最右邊。
每一回合Tom 先開始向左或者右移動一格(不能移出長廊外)，然後到Jerry(也可左右移動，但也不能移出長廊外)。
如果在Tom 的回合走一步就踩到Jerry (就是走一步就到跟Jerry 一樣的格)。
Tom 就獲勝，反之就是 Jerry 獲勝。
請你來判斷到底誰會勝出。
如果是 Tom 贏了，就輸出 "Tom"。
如果是 Jerry 贏了，就輸出 "Jerry"。
如果無法判斷，就輸出 "Unknown"。

舉例：
3長度的長廊， Tom 的位置是 1（長廊最左邊），Jerry 是 3（長廊最右邊）。
Tom 先開始，因爲他在邊界所以他不能向左走；
所以Tom 唯一的走法只有向右走一步走到2。
但Jerry 的回合，Jerry 往左走一步去到2 , 踩到Tom；Jerry 獲勝。

Input Format
輸入一個整數 N代表長廊的長度, 1

Output Format
一個字串加換行（Tom, Jerry, Unknown）

Sample Input 1
3
Sample Output 1
Jerry
Sample Input 2
7
Sample Output 2
Jerry
Sample Input 3
2
Sample Output 3
Tom
Hint
請注意大小寫。
請注意印出答案后要空行。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N;
    cin >> N;

    if(N == 1){
        cout << "Unknown" << endl;
    }

    if(N % 2 == 0){
        cout << "Tom" << endl;
    }
    else{
        cout << "Jerry" << endl;
    }
    
    return 0;
}