/*
說明
排列組合應用
從n個相異物中不重覆取出m個之排列數
定義一函式為P(n,m)並回傳一整數
Python:
def P(n,m):
C/C++:
int P(int n, int m);

公式如下：
Pmn=nPm=n!(n−m)!=n(n−1)(n−2)...(n−m+1)
Input Format
n
m

Output Format
排列數

Sample Input
10
2
Sample Output
90
Hint
※函式的設計(名稱、傳入參數個數與回傳值)務必要和題目相同，否則將有可能無法通過批改！
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int P(int n, int m);
int fact(int n);

int main(void){
    int n, m;
    cin >> n;
    cin >> m;

    cout << P(n, m) << endl;
    
    return 0;
}

int P(int n, int m){
    return fact(n) / fact(n-m);
}

int fact(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}