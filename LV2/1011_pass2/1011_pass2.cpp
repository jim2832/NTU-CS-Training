/*
說明
寫個程式，判斷一個人的成績是否及格 (大學部及格分數為60分，研究所為70分)
令使用者輸入他的學藉及成績用數字表示學藉：

(1)大學部(2)研究所，並判斷其成績是否及格

Input Format
學藉：(1)大學部 (2)研究所
成績 (0<=score<=100)

Output Format
pass或fail

Sample Input
2
69
Sample Output
fail
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int student_status, score;
    cin >> student_status;
    cin >> score;

    if(student_status == 1){
        if(score >= 60){
            cout << "pass" << endl;
        }
        else{
            cout << "fail" << endl;
        }
    }
    else if(student_status == 2){
        if(score >= 70){
            cout << "pass" << endl;
        }
        else{
            cout << "fail" << endl;
        }
    }
    else{
        cout << "請輸入正確學籍" << endl;
        return 0;
    }
    
    return 0;
}