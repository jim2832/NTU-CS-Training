/*
Task Description
給定一套N號碼，請將這些數字根據除以另外一個正數m的餘數分類，之後計算這些分類的 總和、最大值及最小值。
例如，當m=2時(分2類，餘數為0和1)，您需要查找所有偶數的總和、最大值最小值和所有奇數的總和、最大值最小值。 保證數列中將至少有一個數字對應於所有可能的m（從0 到m-1）餘數。
Input Format
輸入數據的第一行由兩個整數N和m組成， 其中0≤N≤10000 和 1≤m≤1000。
下一行包含要處理的N個非負整數，每個整數小於或等於10000。
Output Format
您應該輸出m行。
每一行必須由三個數字組成，這些數字分別是總和、最大值和最小值。
Sample Input
6 3
0 1 2 4 7 14
Sample Output
0 0 0
12 7 1
16 14 2
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int find_max(int *arr, int &size){
    int max = 0;
    for(int i=0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    return max;
}

int find_min(int *arr, int &size){
    int min = 10000;
    for(int i=0; i<size; i++){
        if(arr[i] != 0){
            if(min > arr[i]){
                min = arr[i];
            }
        }
    }

    return min;
}

int main(void){
    int N, m;
    int sum = 0, max, min;
    cin >> N >> m;
    int input[N], mod_class[m][N], mod_count[m];

    //input
    for(int i=0; i<N; i++){
        cin >> input[i];
    }

    //initialization
    for(int i=0; i<m; i++){
        for(int j=0; j<N; j++){
            mod_class[i][j] = 0;
            mod_count[i] = 0;
        }
    }

    //mod classification
    for(int i=0; i<N; i++){
        for(int j=0; j<m; j++){
            if(input[i] % m == j){
                mod_class[j][mod_count[j]] = input[i];
                mod_count[j]++;
            }
        }
    }

    //output
    for(int i=0; i<m; i++){
        sum = 0;
        for(int j=0; j<N; j++){
            sum += mod_class[i][j];
            max = find_max(mod_class[i], mod_count[i]);
            min = find_min(mod_class[i], mod_count[i]);
        }
        if(min == 10000){
            min = 0;
        }
        cout << sum << " " << max << " " << min << endl;
    }

    return 0;
}