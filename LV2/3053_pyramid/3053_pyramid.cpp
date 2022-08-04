/*
說明
金字塔是世界七大奇景之一，請利用for迴圈寫出如下圖所示的N層金字塔圖形。

Input Format
數字N

Output Format
高為n的*號金字塔(每列最後/右一個星號後無空白)

Sample Input
4
Sample Output
   *
  * *
 * * *
* * * *
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
            if(k == i){
                cout << "*";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }

    //最後一層
    for(int i=1; i<=n; i++){
        if(i == n){
            cout << "*";
        }
        else{
            cout << "* ";
        }
    }
    
    return 0;
}