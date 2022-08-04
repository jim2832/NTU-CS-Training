/*
說明
請試著輸入一數字n並印出一高度為n之
由遞增數字所組成之三角形

Input Format
數字n

Output Format
高為n的數字三角形(每個數字後含一空白)

Sample Input
5
Sample Output
1
2
3
4
5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, number = 0;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            number++;
            cout << number << " ";
        }
        cout << endl;
    }
    
    return 0;
}