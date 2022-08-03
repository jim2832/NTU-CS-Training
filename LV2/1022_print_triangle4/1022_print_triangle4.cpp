/*
說明
請試著輸入一數字n並印出一三角形

Input Format
數字n

Output Format
高為n的*號三角形

Sample Input
5
Sample Output
    *
   **
  ***
 ****
*****
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;
    
    for(int i=2; i<=n; i++){
        for(int j=n-i+1; j>=1; j--){
            cout << " ";
        }
        for(int k=1; k<=i-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        cout << "*";
    }
    cout << endl;
    
    return 0;
}