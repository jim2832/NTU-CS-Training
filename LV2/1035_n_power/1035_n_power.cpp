/*
Task Description
編寫一個程序來計算n的i次方，其中n是一個整數，i也是一個整數，範圍為為1到5之間。
Input Format
輸入中有兩行。第一行為整數n。
第二行為整數 i。
Output Format
輸出有一行，為n的第i 次方的結果。
Sample Input
-2
2
Sample Output
4
Sample Input
-4
1
Sample Output
-4
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, i;
    long int result;
    cin >> n;
    cin >> i;

    result = pow(n, i);
    cout << result << endl;
    
    return 0;
}