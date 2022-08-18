/*
說明
請宣告一個整數陣列，內容有5格
輸入這5格陣列的內容後
請將陣列內容排序後依序印出陣列內容(整數數字)後空一tab(\t)印出該數字個數個*號

Input Format
整數1
整數2
整數3
整數4
整數5

Output Format
整數(tab間隔)整數1個*號(換行)
整數(tab間隔)整數2個*號(換行)
整數(tab間隔)整數3個*號(換行)
整數(tab間隔)整數4個*號(換行)
整數(tab間隔)整數5個*號(換行)
(由小到大依序列印)

Sample Input
5
3
2
1
7
Sample Output
1    *
2    **
3    ***
5    *****
7    *******
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int input[5];

    for(int i=0; i<5; i++){
        cin >> input[i];
    }

    for(int i=4; i>0; i--){
        for(int j=0; j<=i-1; j++){
            if(input[j] > input[j+1]){
                int temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
        }
    }

    for(int i=0; i<5; i++){
        cout << input[i] << "\t";
        for(int j=0; j<input[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}