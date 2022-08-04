/*

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