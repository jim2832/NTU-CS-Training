/*
說明
請撰寫一程式，令使用者輸入三個整數a,b,c之後，請判斷出，a與其他兩個整數bc的關系，例如a是否為這三個整數之中最大的數字，是否不是最大的，是否為最小的，是否不是最小的數字...等。

Input Format
整數a
整數b
整數c
※測資中不會有和a一樣的數字bc出現

Output Format
每一行請印出True/False
第一行為a是否為三數之中最大的
第二行為a是否為三數之中最小的
第三行為a是否不是三數之中最大的
第四行為a是否不是三數之中最小的

Sample Input
10
20
30
Sample Output
False
True
True
False
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int a, b, c;
    int max = 0, min = 100;
    int num[3];

    cin >> a;
    cin >> b;
    cin >> c;
    
    num[0] = a;
    num[1] = b;
    num[2] = c;

    for(int i=0; i<3; i++){
        if(max < num[i]){
            max = num[i];
        }
        if(min > num[i]){
            min = num[i];
        }
    }

    if(a == max){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    if(a == min){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    if(a != max){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    if(a != min){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}