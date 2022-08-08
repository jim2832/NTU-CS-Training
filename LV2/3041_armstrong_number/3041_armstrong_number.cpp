/*
說明
Armstrong number (阿姆斯壯數)是指一個n位數的整數，它的所有位數的n次方和剛好等於自己。

例一：407 = 4^3 + 0^3 + 7^3
例二：1634 = 1^4 + 6^4 + 3^4 + 4^4

現在題目書入一個範圍，請找出該範圍內所有的armstrong number。

Input Format
n m (n、m兩整數由空格格開；且n0,m<=100000)

Output Format
若該範圍有值列印：int & int & int...
若該範圍找不到阿姆斯壯數則列印：none

Sample Input 1
100 999
Sample Output 1
153 & 370 & 371 & 407
Sample Input 2
10 99
Sample Output 2
none
Sample Input 3
100 200
Sample Output 3
153
Hint
迴圈暴力解可過
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, m, digit = 0;
    //cin >> n >> m;

    //for(int num=n; num<=m; num++){
    int num = 153;
    //calculate digit number
    int div_num = num;
    while(div_num > 0){
        div_num /= 10;
        digit++;
    }
    //test if it is a armstrong number
    int sum = 0, temp = num;
    while(num > 0){
        int r = temp % 10;
        sum += pow(r, digit);
        temp /= 10;
    }
    if(sum == num){
        cout << num << " ";
    }
    //}
    
    return 0;
}