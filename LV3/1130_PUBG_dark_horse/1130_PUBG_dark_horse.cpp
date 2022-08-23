/*
主題
if else + for loop + 陣列

說明

《絕地求生》（英語：PlayerUnknown's Battlegrounds,又譯作「絕地求生：大逃殺」，直譯為「無名玩家的戰場」）
PUBG 簡單來説就是一款大逃殺類寫實射擊游戲。每一局都有許許多多的玩家在為爭奪吃雞而互相廝殺。
在游戲中每個玩家都有一個 rating 'p'來代表自己的實力 ，其中 0 < p < 10000
而你要知道到底和你參加同一場戰爭的人裏面有多少人是黑馬。
黑馬的定義是只要高出這裏人的平均的就是黑馬。
已知，和你在同一場的玩家一共有 N 位， 其中 0 < N < 100000.
目標，求出高出平均數的人數。
舉例：
N=5 , p[5]= {1，2，3，4，5}, 平均= 3。
所以高出平均的人有2個。（等於一定要嚴格大於不算）。

N=3 , p[3]= {1, 2, 4}，平均= 2.33333。
所以答案 =1.

Input Format
一開始輸入一個整數 N, 代表一共多少玩家。 接下來一行有N 個整數（沒有小數），分別表示第 P[i],(0

Output Format
一個整數，多少人大於平均rating。
Sample Input 1
5
1 2 3 4 5
Sample Output 1
2
Sample Input 2
3
1 2 4
Sample Output 2
1
Hint
請注意印出答案后要換行，一定要嚴格大於才算。
這題有需要用到double 還是float 嗎？
有沒有只用 int 就可以做到的方法？
平均是小數或是整數會影響結果嗎？
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, sum = 0, count = 0;
    double avg;
    cin >> N;
    double player[N];

    for(int i=0; i<N; i++){
        cin >> player[i];
        sum += player[i];
    }
    avg = (double)sum / N;

    for(int i=0; i<N; i++){
        if(player[i] > avg){
            count ++;
        }
    }

    cout << count;
    
    return 0;
}