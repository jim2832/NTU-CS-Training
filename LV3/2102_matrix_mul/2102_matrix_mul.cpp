/*
有二矩陣a,b陣如下圖，請依格式輸出其相乘的結果c



(圖片格式參考用)
Input Format
無

Output Format
矩陣 c
(每一格數字佔5格並靠左對齊，可用%-5d)

Sample Input
 
Sample Output
60   72   84
1N2  162  192
204  252  300
Hint
請依格式輸出，直接複製答案列印是不可行的！
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
#define N 3
using namespace std;

int main(void){
    int a[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8 ,9}};
    int b[N][N] = {{2, 4, 6}, {8, 10, 12}, {14, 16 ,18}};
    int c[N][N];

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            c[i][j] = 0;
            for(int k=0; k<N; k++){
                c[i][j] += a[i][k] * b[k][j];
            }    
        }    
    }

    for(int i=0; i<N; i++){    
        for(int j=0; j<N; j++){    
            printf("%-5d", c[i][j]);
        }    
        cout << endl;    
    }    
    
    return 0;
}