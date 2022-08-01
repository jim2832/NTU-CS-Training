/*
說明
令使用者輸入一整數score為成績(0≤score≤100)
並判斷其成績是否及格(60分及格)
及格的話請輸出pass
不及格的話請輸出fail

Input Format
成績

Output Format
pass或fail

Sample Input
60
Sample Output
pass
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int score;
    cin >> score;
    if(score > 100 || score < 0){
        cout << "請輸入合法分數！" << endl;
        return 0;
    }

    if(score >= 60){
        cout << "pass" << endl;
    }
    else{
        cout << "fail" << endl;
    }
    
    return 0;
}