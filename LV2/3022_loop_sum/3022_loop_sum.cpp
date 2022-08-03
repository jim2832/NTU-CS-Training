/*
說明
現有一數列如下：1,2,3,4,5,6,7,8,9,10
請將索引為：

奇數的數字加總
偶數的數字加總
將其所有的數字加總
Input Format
字串 (一串數列組成的字串)

Output Format
整數 (奇數的數字加總)
整數 (偶數的數字加總)
整數 (所有的數字加總)

Sample Input 1
1,2,3,4,5,6,7,8,9,10
Sample Output 1
25
30
55
Sample Input 2
111,222,333,444,555,666,789,987,876,678,765,567
Sample Output 2
4107
2886
6993
Hint
利用.split()
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#define N 100
using namespace std;

int main(void){
    int number[N], total_sum = 0, odd_sum = 0, even_sum = 0;

    for(int i=0; i<N; i++){
        number[i] = 0;
    }
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &number[0], &number[1], &number[2], &number[3], &number[4], &number[5], &number[6], &number[7], &number[8], &number[9], &number[10], &number[11], &number[12], &number[13], &number[14]);
    

    for(int i=0; i<N; i++){
        total_sum += number[i];
        if(number[i] % 2 == 1){
            odd_sum += number[i];
        }
        else{
            even_sum += number[i];
        }
    }

    cout << odd_sum << endl << even_sum << endl << total_sum << endl;
    
    return 0;
}