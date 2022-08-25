/*
Task Description
請寫一支程式統計有多少整數被M除後餘 0、餘 1、...、餘 M-1。

Input format
第一行為輸入整數的數量N。
以下N行每行都有一個整數輸入。
最後一行為M。
1≤M≤200000

Output format
可以輸出M⋅k,M⋅k+1, ...和M⋅k+M−1的整數的數量。

Sample input 1
5
1
2
3
4
5
3
Sample output 1
1
2
2
Sample input 2
10
3
1
4
1
5
9
2
6
5
3
3
Sample output 2
4
3
3
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, M;
    cin >> N;
    int input[N];

    for(int i=0; i<N; i++){
        cin >> input[i];
    }

    cin >> M;
    int mod[M];

    //init
    for(int i=0; i<M; i++){
        mod[i] = 0;
    }

    for(int i=0; i<N; i++){
        mod[input[i] % M]++;
    }

    for(int i=0; i<M; i++){
        cout << mod[i] << endl;
    }
    
    return 0;
}