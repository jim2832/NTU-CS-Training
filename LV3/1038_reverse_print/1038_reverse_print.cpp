/*
Task Description
編寫一個程序來讀取正整數$ N $和$ N $個整數的序列，然後反向打印序列。 限制N不超過1000。
Input Format
輸入中有兩行。第一行為一整數 $N$ 。第二行有 $N$個整數。
Output Format
輸出中有一行，為一根據描述的反向序列，每個數字間以一空白間隔，最後無空白。
Sample Input
5
1 4 8 9 10
Sample Output
10 9 8 4 1
特別注意
若在行尾輸出 多餘的空白字元，你將會得到 Wrong Answer
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    int input[n];
    for(int i=0; i<n; i++){
        cin >> input[i];
    }

    for(int i=n-1; i>=0; i--){
        if(i == 0){
            cout << input[i];
        }
        else{
            cout << input[i] << " ";
        }
    }
    
    return 0;
}