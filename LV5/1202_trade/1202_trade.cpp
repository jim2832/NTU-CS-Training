/*
主題
陣列、容器 Array,For loop

說明
有一天有一個人要來跟王老先生進行一筆交易。
他打算定期的買下王老先生農場的農產品。
他給了王老先生一份清單，裏面有他每次交易的數量。
但是傳出清單后發現交易的次序反了，所以趕緊通知王老先生。
王老先生的之後對於這筆清單還是有些疑惑，所以請你來幫他整理清單。

Input Format
一開始輸入一個整數 N(0 接下來一行有N 個整數，分別表示第 N[i],(0

Output Format
把清單的次序全部反過來印出。
每次輸出后都有空格，最后一個空格后再空行。

Sample Input 1
10
2 4 10 8 6 7 13 15 15 12
Sample Output 1
12 15 15 13 7 6 8 10 4 2
Sample Input 2
8
2 4 8 6 7 13 15 12
Sample Output 2
12 15 13 7 6 8 4 2
Hint
請注意印出答案后要空行。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int *list = new int[N];

    for(int i=0; i<N; i++){
        cin >> *(list + i);
    }

    for(int i=N-1; i>=0; i--){
        cout << *(list + i) << " ";
    }

    delete [] list;
    
    return 0;
}