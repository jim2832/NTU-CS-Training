/*
說明
請撰寫一程式，可以令使用者輸入一整數n
並印出一高度為n，由*所構成的三角形

Input Format
整數n

Output Format
高度為n的*號三角形，每多一層*就多一個

Sample Input
5
Sample Output
1
2
3
4
5
*
**
***
****
*****
Hint
※本題輸出沒有任何空白，請注意不要印出任何多餘的空白字元。
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
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}