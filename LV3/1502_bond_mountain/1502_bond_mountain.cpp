/*
主題
陣列、容器 Array,For loop

說明
Bond，終於成功當上一名間諜。
現在他被指派了第一個任務，調查山上私人部落的情報。
首先爲了融入部落除了出色的服裝打扮之外還要學會當地的語言。
經過了種種的訓練James Bond 終於可以混進去了。
然是在任務開始的前一天，他突然得到一個情報。
他必須知道部落附近的地形才有辦法成功混進去部落較高級的地位。
由於時間緊迫，所以他要求你來幫他認出這部落附近的地形。
James Bond 通過情報局獲得了那一帶的地形的高度。
資料裏面是有N個地點的高度資訊，而要請你來判斷那個地點是山頂還是山谷。
我們定義那一點是山頂的方式是那點的左右兩點都不會高於它。
而定義山谷的方式是左右兩點都不會低於它。
可以知道第一個點和第N個點不會是山頂或者是山谷，因爲他們旁邊只有一點。
而你的任務是記錄到底有多少個山頂，多少座山谷。
ps: 你可以假設相鄰的地點高度不會一樣。

例子：
N=6
高度的資料是 1 3 2 5 6 3
所以答案是山頂有兩個，在位置 2和5，山谷一個在位置3。

Input Format
一開始輸入一個整數 N(0 接下來一行有N 個整數，分別表示第 N[i],(-1000000

Output Format
一共印出兩行
第一行印出山頂的數量，下一行印出山谷的數量
例子：(用説明的資料)
"2\n" <-高山的數量
"1\n" <-盆地

Sample Input 1
6
1 3 2 5 6 3
Sample Output 1
2
1
Sample Input 2
8
2 4 8 6 7 13 15 12
Sample Output 2
2
1
Hint
每行輸出後無空格，並且要換行
原始輸入可能會有多餘空白造成split後的list會有多餘的空字串，請務必處理。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, peak = 0, valley = 0;
    cin >> N;
    int mountain[N];

    for(int i=0; i<N; i++){
        cin >> mountain[i];
    }

    for(int i=1; i<N-1; i++){
        if(mountain[i] > mountain[i-1] && mountain[i] > mountain[i+1]){
            peak++;
        }
        if(mountain[i] < mountain[i-1] && mountain[i] < mountain[i+1]){
            valley++;
        }
    }

    cout << peak << endl << valley << endl;
    
    return 0;
}