/*
說明
排列組合應用
從n個相異物中不重覆取出m個之排列數
定義一函式為def P(n,m):並回傳一整數
公式如下：
Pmn=nPm=n!(n−m)!=n(n−1)(n−2)...(n−m+1)

從n個相異物中不重覆取出m個之組合數
定義一函式為def C(n,m):並回傳一整數
公式如下： Cmn=nCm=(nm)=nPmm!=n!m!(n−m)!
請在函式中增加參數合理性，使m大於n時不會計算出不合理的數值並回傳0

Input Format
n
m

Output Format
排列數
組合數

Sample Input 1
10
2
Sample Output 1
90
45
Sample Input 2
##

10
11
Sample Output 2
0
0
Hint
※函式的設計(名稱、傳入參數個數與回傳值)務必要和題目相同，否則將有可能無法通過批改！
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int P(int n, int m);
int C(int n, int m);
int fact(int n);

int main(void){
    int n, m, zero = 0;
    cin >> n;
    cin >> m;

    if(n < m){
        cout << zero << endl << zero << endl;
    }
    else{
        cout << P(n, m) << endl << C(n, m) << endl;
    }
    
    return 0;
}

int P(int n, int m){
    return fact(n) / fact(n-m);
}

int C(int n, int m){
    return fact(n) / (fact(m) * fact(n-m));
}

int fact(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac *= i;
    }
    return fac;
}