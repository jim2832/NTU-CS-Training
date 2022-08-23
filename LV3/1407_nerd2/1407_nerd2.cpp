/*
主題
陣列、容器 Array,For loop

說明
阿宅看了影片后打算開始進行他的偉大脫魯計劃。
第一點就是要改變自己的外觀和生活習慣。
於是他整理好自己的房間后也打算幫自己的傢從新裝潢迎接新的自己。
於是他就去大賣場開始買適合的擺設或是衣服等。
阿宅看到了大賣場裏有很多他想買的東西，但是他現在衹有一個背包，容量(K)有限，太大的東西阿宅帶不回去。
可是勤勞的阿宅不會氣餒，他願意來回大賣場把需要的東西買完。
已知阿宅要買的東西有N個，清單裏記錄的是他要買物品的大小。例如一單位大，等等。
請問阿宅最後可以買到多少個物品呢？

例子:
N=5, K=6 (一共有5個物品，背包容量為6)
1 3 5 7 9
答案=3，總體積=1+3+5=9（可帶走第1~3 物品，物品4,5太大了更本放不進背包裏）

Input Format
一開始輸入兩個整數 N，K(0 接下來一行有N 個整數，分別表示第 N[i],(0

Output Format
兩個整數，求阿宅最後可以買到多少個物品,物品的總體積（他可以去賣場無限次）
（買到多少個物品）（空格）（物品的總體積）（換行）

Sample Input 1
5 6
1 3 5 7 9
Sample Output 1
3 9
Sample Input 2
8 10
2 4 8 6 7 13 15 12
Sample Output 2
5 27
Hint
請注意印出答案后要換行
原始輸入可能會有多餘空白在最後造成split後的list會有多餘的空字串，請務必處理
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, K, count = 0, weight = 0;
    cin >> N >> K;
    int item[N];

    for(int i=0; i<N; i++){
        cin >> item[i];
        if(item[i] <= K){
            count++;
            weight += item[i];
        }
    }

    cout << count << " " << weight << endl;
    
    return 0;
}