/*
主題
陣列、容器 Array,For loop

說明
身爲一個優秀的小神厨，小當家的食材都是自己精心挑選的。
這次他打算挑戰以不同種煮法去處理一條魚，所以他打算去養殖場挑魚。
已知養殖場裏面有N 個池子，每個池子裏面有數量不定的魚。
養殖場老闆給了小當家一個大網子，讓小當家一次可以撈K條魚上來。
由於小當家是個完美主義者，衹要池裏的魚少過K條他就不打算再撈了。
（因爲撈到的魚一定少於K）
所以一旦他不在這池撈魚他就會換去下一個池塘，直到全部池塘都不能再撈魚為止。
(就是全部池塘的魚少過K條)
請問他這一趟可以最多可以撈到多少條魚呢？ 例子:
N=5, K=6 (一共有5個池塘，一次可以撈上來6條魚)
1 3 5 7 9 (每個池塘魚的數量)
答案=12條（在第四個和第五個池子各撈一次，6x2=12）

Input Format
一開始輸入兩個整數 N，K(0 接下來一行有N 個整數，分別表示第 N[i],(0

Output Format
一個整數，求小當家可以撈到多少條魚

Sample Input 1
5 6
1 3 5 7 9
Sample Output 1
12
Sample Input 2
8 10
2 4 8 6 7 13 25 12
Sample Output 2
40
Hint
請注意印出答案后要空行。 使用Python解此題須注意，本題有二行輸入，所以只可以有二個input()
input()為字串型態，並以一行為單位，可用split做切割後，再轉數字型態。
原始輸入可能會有多餘空白造成split後的list會有多餘的空字串，請務必處理。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, K, count = 0;
    cin >> N >> K;
    int pool[N];

    //input
    for(int i=0; i<N; i++){
        cin >> pool[i];
    }

    for(int i=0; i<N; i++){
        while(pool[i] >= K){
            pool[i] -= K;
            count++;
        }
    }

    cout << count * K;
    
    return 0;
}