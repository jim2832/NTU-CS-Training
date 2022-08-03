/*
說明
小明一個人來到臺灣求學，爲了不要讓父母為小明的學費擔憂，小明決定去打工賺學費。
很幸運的小明找到了在餐廳當收銀員的工作。
工作固然辛苦，但小明發現了有趣的現象。
厨師A 煮的食物都喜歡以奇數的價格售賣出去。而厨師B則喜歡以偶數的價格賣出去。
有一天厨師A，B 互相鬥氣，想要比一比到底誰為餐廳賺得較多的錢。於是就找小明當裁判。
已知厨師A 煮出來的食物都是50元以上，而厨師B煮出來的食物都是 100元以上。
而餐廳老闆不在乎這兩位厨師的鬥爭，只是在乎餐廳的營業額是多少。
ps: 因爲餐廳當然還有其他厨師，但他們賣的餐點一定不會跟 厨師A,B 在價格上有重叠。
因爲小明經驗缺乏，所以請幫助小明計算厨師 A 和厨師 B 的獲利，再來算出餐廳的營業額。
小明能否保住這份工作就靠你了！

Input Format
一開始輸入一個整數 N(0 接下來一行有N 個整數，分別表示第 N[i],(0

Output Format
整數 M1,厨師 A 的獲利
整數 M2,厨師 B 的獲利
整數 M3,餐廳的營業額

Sample Input
10
10 50 103 99 100 130 80 67 66 93
Sample Output
362
230
798
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, M1 = 0, M2 = 0, M3 = 0;
    cin >> n;
    int price[n];

    for(int i=0; i<n; i++){
        cin >> price[i];
        M3 += price[i];
        if(price[i] % 2 == 1 && price[i] >= 50){
            M1 += price[i];
        }
        if(price[i] % 2 == 0 && price[i] >= 100){
            M2 += price[i];
        }
    }

    cout << M1 << endl << M2 << endl << M3 << endl;
    
    return 0;
}