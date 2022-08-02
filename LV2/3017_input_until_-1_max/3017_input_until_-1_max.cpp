/*
說明
請連續輸入一連串數字(皆為正整數)，直到輸入-1結束，請列出該數列之總合，平均與最大值與其輸入的位置

Input Format
數字1 (正整數)
數字2 (正整數)
...

數字N (正整數)
-1

Output Format
總合
平均(輸出到小數點後1位)
最大值
最大值的位置(從一起算)

Sample Input
10
20
30
40
50
-1
Sample Output
150
30.0
50
5
Hint
因重覆次數不可預測，所以建議使用while迴圈
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int input, sum = 0, count = 0, max = 0, max_pos;
    double avg = 0;

    while(input != -1){
        cin >> input;
        if(input != -1){
            sum += input;
            count++;
        }
        if(max < input){
            max = input;
            max_pos = count;
        }
    }

    avg = (double)sum / count;
    cout << sum << endl;
    printf("%.1f\n", avg);
    cout << max << endl << max_pos << endl;
    
    return 0;
}