/*
說明
輸入兩班上3位同學分數後
印出各班總分、平均
及全校總分、平均

Input Format
班1成績1 成績2 成績3
班2成績1 成績2 成績3

Output Format
輸出共13行如下：
班1
成績1 成績2 成績3
班總分
班平均
班2
成績1 成績2 成績3
班總分
班平均
校總分 校平均

※平均請都輸出到小數點後2位

Sample Input
70 80 90
50 60 70
Sample Output
1
2
3
4
5
6
7
8
9
10
11
12
13
class 1
 1: 70
 2: 80
 3: 90
 sum: 240
 avg: 80.00
class 2
 1: 50
 2: 60
 3: 70
 sum: 180
 avg: 60.00
total: 420, avg: 70.00
Hint
意空格和輸出的縮排
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int score[2][3];
    int sum, total = 0;
    double avg;

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cin >> score[i][j];
        }
    }

    for(int i=0; i<2; i++){
        sum = 0;
        avg = 0;
        cout << "class " << i + 1 << endl;
        for(int j=0; j<3; j++){
            cout << " " << j + 1 << ": " << score[i][j] << endl;
            sum += score[i][j];
            total += score[i][j];
        }
        avg = (double)sum/3;
        printf(" sum: %d\n avg: %.2f\n", sum, avg);
    }
    
    avg = (double)total/6;
    printf("total: %d, avg: %.2f\n", total, avg);
    
    return 0;
}