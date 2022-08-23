/*
判斷學生是否需要重修
說明
某程式設計課程的平時課程會有小考(共12次)
這堂課的期末算分方法為12次小考成績取最好的前10次小考成績取平均，即為本次的學期成績。
每次小考成績滿分為100，最低為0分。
若此次缺席會被標記為none。

連續輸入一串整數或者none，共12個輸入。
並且算出該同學的學期成績，且判斷同學是pass還是fail。
pass:學期成績>=60
fail:學期成績<60

先把學期成績四捨五入至整數，再判斷是否及格。
(四捨五入的code可以看下面Hint來運用)

若該同學只有9次成績，成績算法即為此9次成績除上10。
*若該同學學期成績為59.5，四捨五入至整數為60分，此同學為pass。


Input Format
int or none
int or none
...
...
...
int or none
(共12個輸入)


Output Format
int (四捨五入取至整數)
pass or fail

Sample Input 1
60
70
80
90
100
90
100
100
100
100
100
100
Sample Output 1
96
pass
Sample Input 2
60
60
60
none
60
60
none
80
90
100
none
80
Sample Output 2
65
pass
Hint
Python:

1.四捨五入可以用round()，例子如下：
round(59.5,0) = 60.0
round(59.27,1) = 59.3
2.也可用格式化輸出達成
C/C++:

請用格式化輸出完成四捨五入
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

void bubble_sort(int *arr){
    for(int i=11; i>0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] < arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void){
    int sum = 0;
    int score[12];
    double final_score;
    string input;

    for(int i=0; i<12; i++){
        cin >> input;
        if(input == "none"){
            score[i] = 0;
        }
        else{
            score[i] = atoi(input.c_str());
        }
    }

    bubble_sort(score);

    for(int i=0; i<10; i++){
        sum += score[i];
    }
    final_score = (double)sum / 10;

    if(final_score - floor(final_score) >= 0.5){
        final_score = floor(final_score) + 1;
    }
    else{
        final_score = floor(final_score);
    }

    if(final_score >= 60){
        cout << final_score << endl << "pass" << endl;
    }
    else{
        cout << final_score << endl << "fail" << endl;
    }

    return 0;
}