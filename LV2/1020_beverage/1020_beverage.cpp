/*
說明
舒跑舉辦了一年一度的飲料季。一瓶飲料價值一塊錢。
不但如此，今年舒跑還給大家一個優惠，衹要有4個飲料瓶蓋就可以換取一瓶飲料。
聰明的山姆看到了這次機會，他想知道他用 X 元最多可以買得到多少瓶飲料？
ex : 8塊可得 10 瓶飲料。 (8+2)
ex2: 6塊可得 8 瓶飲料。
(解釋：先買 6 瓶，得 6瓶蓋，再換一瓶，剩下三個瓶蓋，跟老闆借一瓶，就有4個瓶蓋。再用瓶蓋換回一瓶飲料還給老闆。)
※ 最多只能借一個瓶蓋！

Input Format
輸入一個整數 X, 0

Output Format
一個整數加換行（山姆最多可以買到多少瓶飲料）

Sample Input 1
10
Sample Output 1
13
Sample Input 2
8
Sample Output 2
10
Sample Input 3
6
Sample Output 3
8
Hint
請注意印出答案后要空行。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int bottle, extra, rest;
    cin >> bottle;

    rest = bottle;
    while(rest >= 4){
        extra = rest /4;
        bottle += extra;
        rest %= 4;
        rest += extra;
    }

    if(rest == 3){
        bottle++;
    }

    cout << bottle << endl;
    
    return 0;
}