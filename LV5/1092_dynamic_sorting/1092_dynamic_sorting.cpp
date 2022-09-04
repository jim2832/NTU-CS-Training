/*
說明
請撰寫一程式令
使用C/C++動態記憶體配置
令使用者輸入陣列大小N(1<=N<=600000)
使用泡沫排序法排序或其他排序法
印出從小到大排序的結果
例如：
輸入：34 12 5 66 1
輸出：1 5 12 34 66

Input Format
第一行為陣列大小N(1<=N<=600000)
第二行為N個整數：整數1 整數2 ... 整數N

Output Format
順序印出N個整數，每個整數後包含一空白(印完換行)

Sample Input
5
34 12 5 66 1
Sample Output
1 5 12 34 66
Hint
若是已完成排序即可停止迴圈增進執行效率，加速完成排序，
可在排序時若在從頭到尾檢查完整列陣列時，都沒有發現要交換的對像時，就結束排序。
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

void bubble_sort(int *arr, int n){
    int flag = 1;
    for(int i=n-1; (i>0) && (flag!=0); i--){
        flag = 0;
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
    }
}

int main(void){
    int N;
    cin >> N;
    int *arr = new int[N];

    for(int i=0; i<N; i++){
        cin >> *(arr + i);
    }

    bubble_sort(arr, N);

    for(int i=0; i<N; i++){
        cout << *(arr + i) << " ";
    }
    
    return 0;
}