/*
說明
在舒跑飲料季獲得了額外飲料的山姆決定去登山。
看過地圖后山姆發現臺灣地形高低起伏大，於是山姆決定找出他所看到的地點中選出最高和最矮的地點。

Input Format
一開始輸入一個整數 N(0 接下來一行有 N 個整數，分別表示第 N[i],(-10000<=N[i]<=10000) 地點的高度。

Output Format
整數一（空格）整數二（換行）【最高的地點，最高地點的高度】
整數三（空格）整數四（換行）【最低的地點，最低地點的高度】
若出現相同高度的最大值，請輸出位置最小的那個。

Sample Input
10
10 50 103 99 100 130 80 67 66 93
Sample Output
6 130
1 10
Sample Input
5
20 10 20 -5 -5
Sample Output
1 20
4 -5
Hint
請注意印出答案后要換行。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, max = 0, min = 999999999;
    int max_pos, min_pos;
    cin >> N;
    int *mountain = new int[N];

    //input
    for(int i=0; i<N; i++){
        cin >> *(mountain + i);
    }

    for(int i=0; i<N; i++){
        if(max < *(mountain + i)){
            max = *(mountain + i);
            max_pos = i;
        }
        if(min > *(mountain + i)){
            min = *(mountain + i);
            min_pos = i;
        }
    }

    cout << max_pos+1 << " " << max << endl << min_pos+1 << " " << min << endl;
    
    return 0;
}