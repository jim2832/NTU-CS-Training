/*
說明
動態配置m班，每班n人
輸入m班上n位同學分數後
印出各班總分、平均
及全校總分、平均

Input Format
m班
n人
班1成績1 成績2 成績3
班2成績1 成績2 成績3

Output Format
第一行為 第幾班
第二行為 第一個同學的座號與分數，格式為"空白"座號:"空白"分數"換行"
第三行為 下一個同學的座號與分數，格式同上(如果有的話)
印完本班所有同學的成績後印出本班平均至小數點後2位，格式為"空白"avg:"空白"平均分數"換行"
重複直至印完所有班級資料後印出所有同學的分數平均，格式為avg:"空白"平均分數"換行"
如下：
班1
座號1: 成績1
座號2: 成績2
座號3: 成績3
班1平均
班2
座號1: 成績1
座號2: 成績2
座號3: 成績3
班2平均
校平均

Sample Input
2
3
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
class 1
 1: 70
 2: 80
 3: 90
 avg: 80.00
class 2
 1: 50
 2: 60
 3: 70
 avg: 60.00
avg: 70.00
Hint
注意各班資料的縮排(空白)
請用動態記憶體配置，否則無法通過本題
最後二筆測資若是直接加總會超過整數(int)的範圍
所以要算平均的話可先讓分數除以總學生人數後再加總或是用更大的空間
請用雙倍精度浮點數，單精度的誤差太大
若是你最後兩筆測資會錯，除上述問題之外，那就表示你的動態記憶體有問題，或是靜態記憶體超過上限，或是有未初始化等問題，請仔細細考可能的成因
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(void){
    long int CLASS, STUDENT;
    double avg = 0, sum = 0, total = 0;
    long int **score;

    cin >> CLASS;
    cin >> STUDENT;

    //dynamic allocation
    score = new long int*[CLASS];
    for(int i=0; i<CLASS; i++){
        score[i] = new long int[STUDENT];
    }

    //input
    for(int i=0; i<CLASS; i++){
        for(int j=0; j<STUDENT; j++){
            cin >> score[i][j];
        }
    }

    //calculate
    for(int i=0; i<CLASS; i++){
        cout << "class " << i+1 << endl;
        double temp, temp2;
        sum = 0;
        for(int j=0; j<STUDENT; j++){
            cout << " " << j+1 << ": " << score[i][j] << endl;
            temp = (double)score[i][j] / STUDENT;
            temp2 = (double)score[i][j] / (CLASS * STUDENT);
            sum += temp;
            total += temp2;
        }
        avg = (double)sum;
        printf(" avg: %.2f\n", avg);
    }

    avg = (double)total;
    printf("avg: %.2f", avg);

    //delete
    for(int i=0; i<CLASS; i++){
        delete [] score[i];
    }
    delete [] score;
    
    return 0;
}