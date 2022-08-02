/*
說明
令使用者輸入一介於1~100的數字
依台大的等第制換算等第績分(GPA)與等第成績

Input Format
整數(成績)

Output Format
浮點數(等第績分(GPA)：4.3、4.0、3.7、3.3......)
字串(等第成績:A+、A、A-、B+......)

Sample Input 1
92
Sample Output 1
4.3
A+
Sample Input 2
57
Sample Output 2
0
F
Hint
1. 0不是浮點數
2. 如果輸出GPA為4分必須輸出為4.0
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int score, zero = 0;
    double GPA;
    cin >> score;

    if(score >= 90 && score <= 100){
        GPA = 4.3;
        cout << GPA << endl << "A+" << endl;
    }
    else if(score >= 85 && score <= 89){
        GPA = 4.0;
        cout << GPA << endl << "A" << endl;
    }
    else if(score >= 80 && score <= 84){
        GPA = 3.7;
        cout << GPA << endl << "A-" << endl;
    }
    else if(score >= 77 && score <= 79){
        GPA = 3.3;
        cout << GPA << endl << "B+" << endl;
    }
    else if(score >= 73 && score <= 76){
        GPA = 3.0;
        cout << GPA << endl << "B" << endl;
    }
    else if(score >= 70 && score <= 72){
        GPA = 2.7;
        cout << GPA << endl << "B-" << endl;
    }
    else if(score >= 67 && score <= 69){
        GPA = 2.3;
        cout << GPA << endl << "C+" << endl;
    }
    else if(score >= 63 && score <= 66){
        GPA = 2.0;
        cout << GPA << endl << "C" << endl;
    }
    else if(score >= 60 && score <= 62){
        GPA = 1.7;
        cout << GPA << endl << "C-" << endl;
    }
    else{
        cout << zero << endl << "F" << endl;
    }
    
    return 0;
}