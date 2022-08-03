/*
說明
讓使用者依序輸入三個整數，代表三角形的三個邊長。
請判斷：

判斷是否能成三角形，若可以便輸出「True」;若不行便輸出「False」並結束程式。

判斷是否為直角三角形，若為直角三角形便輸出「Right Triangle」，否則輸出「Non-Right Triangle」。


三角形的判斷方法：「任兩邊長的和大於第三邊」
直角三角形的判斷方法：「兩短邊平方和 = 最長邊平方」(a^2 + b^2 = c^2)
*^代表平方



Input Format
整數
整數
整數

Output Format
True 或 False
Right Triangle 或 Non-Right Triangle (如果上題是True才會顯示這段)

Sample Input 1
6
8
10
Sample Output 1
True
Right Triangle
Sample Input 2
10
30
12
Sample Output 2
False
Hint
1. 當第一題判斷為False時，就要結束程式。
2. 輸出最末端沒有任何空格。
3. 兩邊長的和等於第三邊時就不是三角形。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int a, b, c; //三角形的三邊長
    cin >> a;
    cin >> b;
    cin >> c;

    if(a + b > c && a + c > b && b + c > c){
        cout << "True" << endl;
        if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2)){
            cout << "Right Triangle" << endl;
        }
        else{
            cout << "Non-Right Triangle" << endl;
        }
    }
    else{
        cout << "False" << endl;
        return 0;
    }
    
    return 0;
}