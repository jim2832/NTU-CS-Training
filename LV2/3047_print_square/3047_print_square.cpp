/*
說明
請撰寫一程式，可以令使用者輸入一整數n
並印出一n*n之*號方塊

Input Format
數字n

Output Format
長寬為n的*號方塊(每個*號後含一空白)

Sample Input
5
Sample Output
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}