/*
主題
pointer 指標

說明

在密碼學來説，加密主要要達到兩個效果。
第一混淆(confusion):讓別人看到密文(加密后的文件)后較難猜到明文（未加密的文件）。
第二分散(diffusion):明文裏面更改一個東西會影響到密文裏不止一個東西。
而今天主要要讓你們練習實作第一個效果~混淆(confusion)。
給予一個指標陣列A,容量為N, 0 其中A裏面的元素 A[i],0 目標，A陣列裏的元素位置單雙互換，然後輸出。
注意，N保證是雙數，所以不需要考慮單數的情況。

例子：
N=6
A[i]={1, 3, 2, 5, 6, 3}
單雙位置互換，A[0]和 A[1]互換，A[2]和A[3]互換，以此類推。
答案 "3 1 5 2 3 6 \n" ,每個輸出後面都有一個空格，最後再換行。

Input Format
一開始輸入一個整數 N，(0 (記得用pointer 和 malloc （C語法），不然用普通陣列一定MLE (助教保證;P) )
接下來一行有N 個整數，分別表示第 A[i],(0

Output Format
把交換后的陣列A印出來，每一個輸出後面都有一個空格，最後再換行。

Sample Input 1
6
1 3 2 5 6 3
Sample Output 1
3 1 5 2 3 6
Sample Input 2
8
2 4 8 6 7 13 15 12
Sample Output 2
4 2 6 8 13 7 12 15
Hint
每次輸出后都有空格，最后一個空格后再空行。
用C寫一定要用 malloc 哦！
C++ 請用 new 或 stl 容器
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N;
    cin >> N;
    int *arr = new int[N];

    for(int i=0; i<N; i++){
        cin >> *(arr + i);
    }

    for(int i=0; i<N; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }

    for(int i=0; i<N; i++){
        cout << *(arr + i) << " ";
    }

    delete [] arr;
    
    return 0;
}