/*
說明
請宣告一個整數陣列，內容有5格
輸入這5格陣列的內容後依輸入順序印出

Input Format
整數1
整數2
整數3
整數4
整數5

Output Format
整數1(換行)
整數2(換行)
整數3(換行)
整數4(換行)
整數5(換行)

Sample Input
11
22
33
44
55
Sample Output
11
22
33
44
55
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int arr[5];

    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    for(int i=0; i<5; i++){
        cout << arr[i] << endl;
    }
    
    return 0;
}