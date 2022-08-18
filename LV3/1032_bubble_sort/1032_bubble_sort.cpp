/*
說明
輸入五個整數, 印出從小到大的結果
例如：
輸入：34 12 5 66 1
輸出：1 5 12 34 66 (每個數字後都須加一空白)

Input Format
整數1 整數2 整數3 整數4 整數5

Output Format
順序印出(每個數字後都須加一空白，印完換行)

Sample Input
34 12 5 66 1
Sample Output
1 5 12 34 66
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void bubble_sort(int *arr){
    for(int i=4; i>0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    int input[5];

    for(int i=0; i<5; i++){
        cin >> input[i];
    }

    bubble_sort(input);

    for(int i=0; i<5; i++){
        cout << input[i] << " ";
    }
    
    return 0;
}