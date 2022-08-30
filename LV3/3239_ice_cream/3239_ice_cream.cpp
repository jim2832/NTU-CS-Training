/*
女九的冰淇淋
說明
阿倫是今年剛入學的大一新生。他非常喜歡吃女九全家賣的冰淇淋。阿倫沒有任何一天不吃冰淇淋，每天中午絕對準時在女九全家報到，甚至連店員都記住阿倫了。走出全家，阿倫享受著他的冰淇淋，徜徉在他忘我的冰淇淋世界裡。然而，阿倫總是吃的太過忘我，經常不小心撞倒了女九前面的腳踏車。阿倫每次撞倒腳踏車都會是一排腳踏車的某個區間。阿倫需要花費「阿倫之力」來將腳踏車扶正，而每一台腳踏車依據重量不同會需要不同的阿倫之力來將它扶正。阿倫想要請你幫他計算他需要多少阿倫之力才能把某個區間的腳踏車扶正。

Input Format
每組測資開始有兩個正整數 n, m (n, m <= 100000)。接下來的一行中有 n 個不超過1000的正整數依序代表每台腳踏車所需要多少「阿倫之力」才能扶正。接下來的 m行，每行有兩個數字 l, r (1 <= l <= r <= n)，代表阿倫這次弄倒了l到r這個區間的腳踏車。

Output Format
輸出 m 行，代表該區間所需要的「阿倫之力」。最後，輸出一行空白行。

Sample Input
4 3
63 934 962 994
2 4
1 2
3 4
Sample Output
2890
997
1956
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, m;
    int bicycle_sum = 0, fall_sum = 0;
    cin >> n >> m;
    int l[m], r[m];
    
    int bicycle[n];
    int total[m];

    //input
    for(int i=0; i<n; i++){
        cin >> bicycle[i];
        bicycle_sum += bicycle[i];
    }

    for(int i=0; i<m; i++){
        cin >> l[m] >> r[m];
    }

    for(int i=0; i<m; i++){
        
    }
    
    return 0;
}