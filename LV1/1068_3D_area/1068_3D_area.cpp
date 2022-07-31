/*
Task Description
編寫一個程序來計算表面積和體積。

Input Format
輸入中有五行，用於分別為a,b,c,d和e。
Output Format
輸出中有兩行。第一行為表面積，第二行為盒子的體積。
Sample Input
6
8
10
1
2
Sample Output
472
392
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int a, b, c, d, e;
    int surface_area, area;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    surface_area = 4*(a*c-(a-2*e)*(c-2*e)) + 2*(b*c-(b-e)*(c-e)) + 4*((a-2*e)*d) + 8*((c-2*e)*d) + 2*(a*d + b*d + c*d);
    area = a*c*d + b*c*d + a*b*e - a*d*e - b*d*e - c*d*e + d*e*e - 2*((a-2*e)*(c-2*e)*d) - (b-2*e)*(c-2*e)*d;

    cout << surface_area;
    cout << area;
    
    return 0;
}