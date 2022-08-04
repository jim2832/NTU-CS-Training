/*
說明
請試著輸入一數字n並印出一高度為n之綾形
*號個數為奇數，每層之星號遞增/減二個

Input Format
數字n(需為奇數)

Output Format
高為n的*號綾形(星號後無空白)

Sample Input
5
Sample Output
  *
 ***
*****
 ***
  *
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=1; i<=(n-1)/2; i++){
        for(int j=(n-1)/2; j>=i; j--){
            cout << " ";
        }
        for(int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        cout << "*";
    }
    cout << endl;

    for(int i=(n-1)/2; i>=1; i--){
        for(int j=i; j<=(n-1)/2; j++){
            cout << " ";
        }
        for(int k=2*i-1; k>=1; k--){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}