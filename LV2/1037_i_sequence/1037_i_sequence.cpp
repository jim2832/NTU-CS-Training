/*
Task Description
編寫一個程序來讀取正整數n，然後在n個phases中重覆列印1到第i個的整數，i從1遞增至n。
Input Format
輸入中有一行。輸入一整數 n。
Output Format
輸出中有一行數列，中間及結尾無空格。
Sample Input
5
Sample Output
112123123412345
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
    }
    
    return 0;
}