/*
主題
陣列、容器 Array,For loop

說明
厭倦了每天追逐的日子，Tom&Jerry 打算合作一起開一家公司。
公司前幾年的營運還算不錯，但是現在他們面對到了一個世紀大問題---金融危機。
很多股東都撤資了。 在這個慌亂的時刻， 負責記錄這些事物的秘書缺離職了。
原本 Tom&Jerry 的公司有 N 個股東。然後有 K 個股東撤資了。
爲了拯救 Tom&Jerry 的公司，請你幫他們算出留下來股東的投資的總金額，
還有留下來最大股東的位置和他投資的金額。

Input Format
一開始輸入一個整數 N(0<N<100000)，股東的人數。
接下來一行有N 個整數，分別表示第 N[i],(0<N[i]<=10000) 個別股東的投資金額。
接下來一行有一個整數 K(0<K<N) ，表示撤資的人數。
接下來一行有K 個整數，分別是 K[i],(1<K[i]<=N) 撤資的股東的位置。
（K[i]的數字不會重複， 負責key資料的小姐因為老眼昏花 可能會不小心 按到錯誤的按鍵 請務必忽略掉不在範圍內的數字）

Output Format
整數一（換行）【留下來股東投資的縂金額】
整數二（空格）整數三（換行）【投資最多的股東的位置，投資的金額】
若出現相同投資金額的最大值，請輸出位置最小的那個。

Sample Input 1
10
2 4 10 8 6 7 13 15 15 12
5
1 3 10 7 2
Sample Output 1
51
8 15
Sample Input 2
8
2 4 8 6 7 13 15 12
3
6 7 3
Sample Output 1
31
8 12
Hint
使用Python解此題須注意，input()以行為單位
可以input()輸入為字串型態，並以一行為單位，用split做切割後，再轉數字型態
有些輸入資料在結尾處可能會有多餘的空白，要處理一下
請注意印出答案后要空行。
這題有「解題思路」可以點擊觀看
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, K, sum = 0, max = 0, max_pos;
    cin >> N;
    int shareholder[N];

    //input
    for(int i=0; i<N; i++){
        cin >> shareholder[i];
    }

    //撤離的股東
    cin >> K;
    int leave_pos[K];
    for(int i=0; i<K; i++){
        cin >> leave_pos[i];
    }

    //把撤離的金額改為0
    for(int i=0; i<K; i++){
        shareholder[leave_pos[i]-1] = 0;
    }

    //算剩下最大的股東及其位置
    for(int i=0; i<N; i++){
        sum += shareholder[i];
        if(max < shareholder[i]){
            max = shareholder[i];
            max_pos = i;
        }
    }

    cout << sum << endl << max_pos + 1 << " " << max << endl;
    
    return 0;
}