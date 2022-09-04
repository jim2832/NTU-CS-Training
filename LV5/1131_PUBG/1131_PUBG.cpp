/*
主題
pointer 指標

說明

正所謂知己知彼百戰百勝，上一題中你已經知道了全部人的實力了。
(已只有N個人) 0 < N <= 6000000。每個人rating 為P[i], 0 < P[i] < 100000 。
而你也知道你自己的rating 'K'。
經過專家統計，只要自己的rating嚴格高于玩家的中位數的話就有幾率獲勝。
那麽請你算出自己有沒有機會在這場激戰中獲勝。
若有機會的話，就輸出'中位數\n'，再輸出 'WINNER WINNER CHICKEN DINNER!\n'。
若無機會的話，就輸出'中位數\n'，再輸出 'BETTER LUCK NEXT TIME!\n'。
爲了方便計算，已知P[i]中所有玩家的rating 都已經小到大排序完成。
爲了方便計算，若n是雙數的話中位數取較小的那個。

例子:
N=5, K=6 (一共有5個玩家，你的rating為6)
P[5]={3 3 5 7 8}
中位數=5，所以輸出'WINNER WINNER CHICKEN DINNER!\n'

N=8, K=7
P[8]={2 4 6 7 8 12 13 15}
中位數= 7 所以輸出 'BETTER LUCK NEXT TIME!\n'

Input Format
一開始輸入兩個整數 N，K(0 (記得用pointer 和 malloc (C語法)，不然用普通陣列一定MLE (助教保證;P) )
接下來一行有N 個整數，分別表示第 P[i],(0

Output Format
一個整數，輸出中位數。
一行字串，你的rating 大於中位數就輸出對應的結果。

Sample Input 1
5 6
3 3 5 7 8
Sample Output 1
5
WINNER WINNER CHICKEN DINNER!
Sample Input 2
8 7
2 4 6 7 8 12 13 15
Sample Output 2
7
BETTER LUCK NEXT TIME!
Hint
請注意印出答案后要空行，千萬千萬不要打錯字哦！建議用copy&paste。
用C寫一定要用 malloc 哦！
C++ 可用 new 或 stl 容器。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, K, mid;
    cin >> N >> K;
    int *player = new int[N]; //dynamic allocation

    for(int i=0; i<N; i++){
        cin >> *(player + i);
    }

    if(N % 2 == 1){
        mid = player[N/2];
    }
    else{
        mid = player[N/2-1];
    }

    if(K > mid){
        cout << mid << endl << "WINNER WINNER CHICKEN DINNER!" << endl;
    }
    else{
        cout << mid << endl << "BETTER LUCK NEXT TIME!" << endl;
    }

    delete [] player;
    
    return 0;
}