/*
Task Description
請撰寫一程式可以令使用者輸入一數字x，如果 x 是 3 和 5 的倍數且不是 7 的倍數，在螢幕上輸出 0。其他情況輸出 1。
Input Format
輸入一數字x
Output Format
輸出中有一行。 如果輸入的 x 是 3 的倍數和 5 的倍數，但不是 7 的倍數，則該行包含 0。 否則輸出為 1。
Sample Input
15
Sample Output
0
Sample Input
105
Sample Output
1
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int x;
    cin >> x;

    if(x % 3 == 0 && x % 5 ==0 && x % 7 != 0){
        cout << 0;
    }
    else{
        cout << 1;
    }
    
    return 0;
}