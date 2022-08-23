/*
迴圈 + 判斷式 + 容器(list)
說明
讓使用者輸入數字，直到-1結束
請列出所有數字之後
再列出由數字小到大排序的串列
加總內容超過30的數字後輸出

Input Format
整數1
整數2
...
...
...
-1

Output Format
串列(list) (輸入的數字)
串列(list) (輸入的數字經過排列)
整數(int) (加總內容超過30(>30)的數字)

Sample Input 1
50
40
30
20
10
-1
Sample Output
[50, 40, 30, 20, 10]
[10, 20, 30, 40, 50]
90
Hint
No Hint
*/

void bubble_sort(int *arr, int &n){
    for(int i=n-1; i>0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int sum_of_over_30(int *arr, int &n){
    int sum = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > 30){
            sum += arr[i];
        }
    }
    return sum;
}

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int input, len = 0;
    int arr[30];

    //input
    for(int i=0; i<30; i++){
        cin >> input;
        if(input == -1){
            break;
        }
        arr[i] = input;
        len++;
    }

    cout << "[";
    for(int i=0; i<len; i++){
        if(i == len-1){
            cout << arr[i];
        }
        else{
            cout << arr[i] << ", ";
        }
    }
    cout << "]" << endl;

    //排序
    bubble_sort(arr, len);

    cout << "[";
    for(int i=0; i<len; i++){
        if(i == len-1){
            cout << arr[i];
        }
        else{
            cout << arr[i] << ", ";
        }
    }
    cout << "]" << endl;

    cout << sum_of_over_30(arr, len);
    
    return 0;
}