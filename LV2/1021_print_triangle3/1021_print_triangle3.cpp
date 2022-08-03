/*
說明
請試著輸入一數字n並印出一倒三角形

Input Format
數字n

Output Format
高為n的*號倒三角形

Sample Input
5
Sample Output
*****
 ****
  ***
   **
    *
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    //印第一列
    for(int i=1; i<=n; i++){
        cout << "*";
    }
    cout << endl;
    
    for(int i=2; i<=n; i++){
        //印空格
        for(int j=1; j<=i-1; j++){
            cout << " ";
        }
        //印星星
        for(int k=n-i+1; k>=1; k--){
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}