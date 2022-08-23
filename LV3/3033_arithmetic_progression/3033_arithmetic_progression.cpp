/*
說明
等差數列任何相鄰兩項的差相等，該差值稱為公差(d)。
如：[1,3,5,7,9,11,13] 為一等差數列，首項=1;末項=13;公差=2;共7項

而等差級數為一個等差數列的總和
如：[1,3,5,7,9,11,13] 共7項的和為1+3+5+7+9+11+13=49

今天讓使用者輸入

首項
公差
共n項 (n為正整數)
可以得到一個等差數列，並求出等差數列之和。

例如：
首項=1 公差=3 n=5
等差數列就為：[1,4,7,10,13]
等差數列之和就為：1 + 4 + 7 + 10 + 13 = 35
Input Format
整數(int) (首項)
整數(int) (公差)
整數(int) (共n項)

Output Format
首項 + 第二項 + 第三項 + ... + 第n項 = 總和

補充：
(若在等號左端的數字為負數必須用()包起來，如下)
3 + 1 + (-1) + (-3) + (-5) + (-7) + (-9) + (-11) + (-13) + (-15) = -60

#等號右端不用()包住

Sample Input 1
0
2
10
Sample Output 1
0 + 2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 = 90
Sample Input 2
1
10
9
Sample Output 2
1 + 11 + 21 + 31 + 41 + 51 + 61 + 71 + 81 = 369
Sample Input 3
3
-2
10
Sample Output 3
3 + 1 + (-1) + (-3) + (-5) + (-7) + (-9) + (-11) + (-13) + (-15) = -60
Hint
1.注意若數字為負數必須用()包起來，如Sample Output 3。
2.若不會處理負數用()包起來者，可以先提交以拿取部分分數。(()處理本題佔30%)
3.每個加號+兩端都有一個空格，等於=兩端也有一個空格。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int first, diff, n;
    int sum = 0;
    cin >> first;
    cin >> diff;
    cin >> n;
    
    int cur_num = first;
    sum += cur_num;
    if(first >= 0){
        cout << cur_num << " + ";
    }
    else{
        cout << "(" << cur_num << ")" << " + ";
    }

    for(int i=1; i<n; i++){
        cur_num += diff;
        sum += cur_num;
        if(cur_num >= 0){
            if(i == n-1){
                cout << cur_num << " = ";
            }
            else{
                cout << cur_num << " + ";
            }
        }
        else{
            if(i == n-1){
                cout << "(" << cur_num << ")" << " = ";
            }
            else{
                cout << "(" << cur_num << ")" << " + ";
            }
        }
    }
    cout << sum;
    
    return 0;
}