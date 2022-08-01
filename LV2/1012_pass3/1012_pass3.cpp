/*
說明
寫個程式，判斷一個人的成績是否及格
(大學部及格分數為60分，研究所為70分)
令使用者輸入學籍與成績
若是學籍使用者輸入的不是1也不是2便輸出錯誤訊息role error並結束程式
若是分數使用者輸入的不是介於0~100便輸出錯誤訊息score error並結束程式
若以上輸入皆正確就判斷其成績是否及格並輸出

Input Format
第一行輸入一整數學藉(1:大學部 2:研究所)
如果第一行輸入在許可範圍內，可輸入第二行為一整數成績，如果第一行輸入的學藉不在範圍內，不可有第二行輸入

Output Format
若學籍有錯誤就輸出role error並結束程式
若分數有錯誤就輸出score error並結束程式
若皆正確就輸出pass或fail

Sample Input 1
2
69
Sample Output 1
fail
Sample Input 2
3
Sample Output 2
role error
Sample Input 3
2
200
Sample Output 3
score error
Sample Input 4
1
60
Sample Output 4
pass
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int student_status, score;
    cin >> student_status;

    if(student_status == 1){
        cin >> score;
        if(score >= 60 && score<= 100){
            cout << "pass" << endl;
        }
        else if(score <= 59 && score >= 0){
            cout << "fail" << endl;
        }
        else{
            cout << "score error" << endl;
        }
    }
    else if(student_status == 2){
        cin >> score;
        if(score >= 70 && score<= 100){
            cout << "pass" << endl;
        }
        else if(score <= 69 && score >= 0){
            cout << "fail" << endl;
        }
        else{
            cout << "score error" << endl;
        }
    }
    else{
        cout << "role error" << endl;
    }

    return 0;
}