/*

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int month;
    cin >> month;

    if(month >= 3 && month <= 5){
        cout << "Spring" << endl;
    }
    else if(month >= 6 && month <= 8){
        cout << "Summer" << endl;
    }
    else if(month >= 9 && month <= 11){
        cout << "Autumn" << endl;
    }
    else if (month == 1 || month == 2 || month == 12){
        cout << "Winter" << endl;
    }
    else{
        cout <<  "Month doesn't exist!" << endl;
    }
    
    return 0;
}