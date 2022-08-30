/*
說明
請撰寫一程式
令使用者可以輸入任意字串n ，並判斷n 的內容是否為正整數
當輸入的n不為正整數，提示使用者輸入型態錯誤
若輸入的值為正整數，將其print至螢幕上

Input Format
一字串n

Output Format
字串n的內容是否為正整數，是的話輸出n=XX，不是的話輸出is not a number

Sample Input
100
Sample Output
n=100
Sample Input
a
Sample Output
is not a number
*/

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using std::cout;
using std::cin;
using std::endl;
using std::string;

bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main(void){
    string str;

    cin >> str;

    isNumber(str) ? cout << "n=" << str << endl : cout << "is not a number" << endl;
    
    return 0;
}