/*
Task Description
寫一個程序來打印日曆。請使用者輸入年、月和那個月的第一天的那一天是星期幾。然後您需要打印那個月的日曆。請注意，當您給予2月時，您需要確定給定年份是閏年。
Input Format
該輸入有三個數字：年，月，以及那個月的第一天的那一天是星期幾。例如，如果您獲得2007 9 6，這意味著您需要打印出2007年9月的日曆，其中包含9月第一天是星期六的附加信息。如果這一天是星期0，它意味著星期天。我們確保年份會在1000至3000之間。
Output Format
輸出是那個月的日曆。第一行是Su Mo Tu We Th Fr Sa\n表示星期。然後，每個數字都將被打印為%3d3表示數字的寬度，並且數字由兩個=====================\n包含在內。請注意，您無法在每行的末尾放置尾隨空格，也不會在輸出結束時放置額外的\n。另請注意，如果輸入無效，例如，如2007 13 9，則只需打印invalid\n。
Sample input
2007 9 6
Sample Output
 Su Mo Tu We Th Fr Sa
=====================
                    1
  2  3  4  5  6  7  8
  9 10 11 12 13 14 15
 16 17 18 19 20 21 22
 23 24 25 26 27 28 29
 30
=====================
Sample input
2007 13 9
Sample Output
invalid
C-string representation
" Su Mo Tu We Th Fr Sa\n"
"=====================\n"
"                    1\n"
"  2  3  4  5  6  7  8\n"
"  9 10 11 12 13 14 15\n"
" 16 17 18 19 20 21 22\n"
" 23 24 25 26 27 28 29\n"
" 30\n"
"=====================\n"
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int year, month, day, week, count = 0;
    cin >> year >> month >> week;

    //不合法的情況
    if(year < 1000 || year > 3000 || month < 1 || month > 12 || week > 6 || week < 0){
        cout << "invalid" << endl;
        return 0;
    }

    //31天的月
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        day = 31;
    }
    //30天的月
    if(month == 4 || month == 6 || month == 9 || month == 11){
        day = 30;
    }
    //2月只有28天(非閏年)
    if(month == 2){
        day = 28;
    }
    //閏年
    if(year % 4 == 0  && year % 100 != 0 && month == 2 || year % 400 == 0){
        day = 29;
    }

    cout << " Su Mo Tu We Th Fr Sa" << endl << "=====================" << endl;

    //印空白
    for(int i=0; i<week; i++){
        cout << "   ";
        count = week;
    }

    for(int i=1; i<=day; i++){
        count++;
        //個位
        if(i / 10 == 0){
            cout << "  " << i;
        }
        //十位
        else{
            cout << " " << i;
        }
        //每7次換一次行
        if(count % 7 == 0){
            cout << endl;
        }
    }

    //如果最後一個數的index不是7的倍數則換行
    if(count % 7 != 0){
        cout << endl;
    }

    cout << "=====================";
    
    return 0;
}