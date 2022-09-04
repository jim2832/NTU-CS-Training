/*
說明
宣告一陣列A，長度為5
使用一指標P存取此陣列 ex:「*(P+i)」
讓使用者輸入5個數字，並找到最大值與最大值的位置

Input Format
整數1 整數2 整數3 整數4 整數5

Output Format
最大值的位置(從1起算)與值

Sample Input
40 60 50 10 20
Sample Output
2: 60
*/

#include <iostream>
#include <string>
#include <cmath>
#define size 5
using namespace std;

int main(void){
    int max = 0, max_pos, A[size];
    int *P = A;

    for(int i=0; i<size; i++){
        cin >> P[i];
        if(max < *(P+i)){
            max = *(P+i);
            max_pos = i;
        }
    }

    cout << max_pos + 1 << ": " << max << endl;
    
    return 0;
}