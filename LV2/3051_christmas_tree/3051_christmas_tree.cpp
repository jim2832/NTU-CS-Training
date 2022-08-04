/*
說明
請試著輸入一數字n並印出一高度為n之聖誕樹
*號個數為奇數，每層之星號遞增二個

Input Format
數字n

Output Format
高為n的*號聖誕樹(每行星號後無空白)

Sample Input
5
Sample Output
    *
   ***
  *****
 *******
*********
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=1; i<=n-1; i++){
        //印空格
        for(int j=n-i; j>=1; j--){
            cout << " ";
        }
        //印星號
        for(int k=1; k<=2*i-1; k++){
            cout << "*";
        }
        cout << endl;
    }

    //最後一層
    for(int i=1; i<=2*n-1; i++){
        cout << "*";
    }

    return 0;
}