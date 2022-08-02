/*
說明
請撰寫一程式可以令使用者輸入身高、體重後計算出計算BMI，並依其BMI判斷出BMI數值的程度。
BMI值計算公式: BMI=體重(公斤)/身高2(公尺2)
例如：一個52公斤的人，身高是155公分，則BMI為 :
52(公斤)/1.552(公尺2)=21.64

並判斷其範圍：
Underweight 過輕：BMI ＜ 18.5
Normal 正常：18.5≦BMI＜24
Overweight 過重：24≦BMI＜27
Obese Class I (Moderately obese) 輕度xx：27≦BMI＜30
Obese Class II (Severely obese) 中度xx：30≦BMI＜35
Obese Class III (Very severely obese) 重度xx：BMI≧35

Input Format
身高(cm)
體重(kg)

Output Format
輸出2行結果
第一行為依所輸入的身高、體重所計算出來的BMI(輸出到小數點後兩位)
第二行為依計算出來的BMI判定此BMI所代表的程度(英文，請確保文字完全與題目規定相同)

Sample Input 1
155
52
Sample Output 1
21.64
Normal
Sample Input 2
180
99
Sample Output 2
30.56
Obese Class II
Hint
輸入單位為 cm 請務必換算成 m 喔
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    double height, weight;
    double m_height, BMI;
    cin >> height;
    cin >> weight;

    m_height = height / 100;
    BMI = weight / pow(m_height,2);
    printf("%.2f\n", BMI);

    if(BMI < 18.5){
        cout << "Underweight" << endl;
    }
    else if(BMI >= 18.5 && BMI < 24){
        cout << "Normal" << endl;
    }
    else if(BMI >= 24 && BMI < 27){
        cout << "Overweight" << endl;
    }
    else if(BMI >= 27 && BMI < 30){
        cout << "Obese Class I" << endl;
    }
    else if(BMI >= 30 && BMI < 35){
        cout << "Obese Class II" << endl;
    }
    else{
        cout << "Obese Class III" << endl;
    }
    
    return 0;
}