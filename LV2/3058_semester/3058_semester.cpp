/*
說明
華華這學期修了很多課，而她這學期只差必修K學分與選修L學分就能畢業。
分別輸入華華修課的課程名稱、等第、選修還是必修、學分數。
解釋：

等第：C-至A+為及格代表有拿到學分；F為不及格並且拿不到學分（不會出現停修者）
等第有：['A+','A','A-','B+','B','B-','C+','C','C-','F']
必選修：R (必修；Required)、E (選修；Elective）


例如：
ANALYTICAL CHEMISTRY INCLUDING LAB,A+,R,6
其中ANALYTICAL CHEMISTRY INCLUDING LAB為課程名稱
此課程得到了A+有拿到學分
此課程為6學分的必修課程


Input Format
第一行為K (離畢業所需必修學分數）
第二行為L (離畢業所需選修學分數）
接下來為課程名稱,等第,選修還是必修,學分數 (中間以逗號隔開)
直到輸入q離開

Output Format
是否可以畢業(是：yes，否：no)

Sample Input 1
6
4
ANALYTICAL CHEMISTRY INCLUDING LAB,A+,R,6
ORGANIC CHEMISTRY,A,E,4
q
Sample Output 1
yes
Sample Input 2
6
4
ANALYTICAL CHEMISTRY INCLUDING LAB,A+,R,6
ORGANIC CHEMISTRY,F,E,4
q
Sample Output 2
no
Hint
1. 必修學分跟選修學分同時都要達成到規定數目才能畢業。

*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int required_needed, elective_needed;
    char course_name[100], rank[100], type[100];
    int credit, required_credit = 0, elective_credit = 0;

    cin >> required_needed;
    cin >> elective_needed;

    while(true){
        scanf("%s,%s,%s,%d", course_name, rank, type, &credit);
        cout << course_name;
        if(strcmp(course_name, "q") == 0){
            break;
        }
        //必修
        if(strcmp(type, "R") == 0){
            if(strcmp(rank, "F")){
                credit = 0;
            }
            required_credit += credit;
        }
        //選修
        if(strcmp(type, "E")){
            if(strcmp(rank, "F")){
                credit = 0;
            }
            elective_credit += credit;
        }
    }

    cout << required_credit << endl << elective_credit << endl;

    if(required_credit >= required_needed && elective_credit >= elective_needed){
        cout << "yes" << endl;
    }
    else{
        cout << "no" << endl;
    }
    
    return 0;
}