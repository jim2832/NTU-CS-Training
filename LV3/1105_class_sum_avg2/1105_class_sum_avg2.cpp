/*
說明
假定某班有5位學生，每位學生各修3門科目，請利用二維陣列的方式儲存學生的各科成績，並將每位學生的各科成績、總分及平均列印出來，並按照找出班上最平均高分的學生。

Input Format
無

Output Format
學生1
科目成績1 科目成績2 科目成績3
總分
平均
...
學生5
科目成績1 科目成績2 科目成績3
總分
平均(小數點後2位)
班總分 校平均(含換行)
平均最高分的學生與平均分數(小數點後2位)

Sample Input
 
Sample Output
student 1
 1: 76
 2: 73
 3: 85
 sum: 234
 avg: 78.00
student 2
 1: 88
 2: 84
 3: 76
 sum: 248
 avg: 82.67
....
student 5
 1: 72
 2: 74
 3: 73
 sum: 219
 avg: 73.00
total: 1225, avg: 81.67
highest avg: student 3: 88.67
Hint
請不要輸出範例輸出中的「....」
請輸出完整學生成績
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
#define student 5
#define subject 3
using namespace std;

int main(void){
    int score[student][subject] = {{76, 73, 85}, {88, 84, 76}, {92, 82, 92}, {82, 91, 85}, {72, 74, 73}};
    int sum, total = 0, max_avg_index;
    double avg, max_avg = 0;

    for(int i=0; i<student; i++){
        sum = 0;
        avg = 0;
        cout << "student " << i + 1 << endl;
        for(int j=0; j<subject; j++){
            cout << " " << j + 1 << ": " << score[i][j] << endl;
            sum += score[i][j];
            total += score[i][j];
        }
        avg = (double)sum/3;
        printf(" sum: %d\n avg: %.2f\n", sum, avg);
        if(max_avg < avg){
            max_avg = avg;
            max_avg_index = i;
        }
    }
    
    avg = (double)total / (student*subject);
    printf("total: %d, avg: %.2f\n", total, avg);
    printf("highest avg: student %d: %.2f", max_avg_index+1, max_avg);
    
    return 0;
}