/*
說明
請寫一支程式令使用者輸入一正整數n
請利用迴圈及串列的append和pop功能：(C++STL vector/list push_back(),pop_back())
將「資料i (i=1, …, n)」倒序放入串列folder中，例如n=10(10,9,8...1)
然後，再將資料順序取出，例如(1,2,3...10)

Input Format
一整數n

Output Format
反序印出
順序印出

Sample Input
5
Sample Output
data 5
data 4
data 3
data 2
data 1
 
data 1
data 2
data 3
data 4
data 5
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        cout << "data " << i << endl;
    }
    cout << endl;
    for(int i=1; i<=n; i++){
        cout << "data " << i << endl;
    }
    
    return 0;
}