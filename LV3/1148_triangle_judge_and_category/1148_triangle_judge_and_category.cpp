/*
三角形判斷以及歸類
說明
下面有N組木棒組，每組由三個木棒組成，有些木棒可以組成三角形
請找出可以組成三角形的木棒列印出來，並且歸類

not triangle (非三角形)
acute angle (銳角)
obtuse angle (鈍角)
right angle (直角)

例如：
A 3 4 5
B 6 8 10
代表A組三個木棒長度分別為3、4、5
代表B組三個木棒長度分別為6、8、10

輸入直到-1停止


三角形的判斷方法：「任兩邊長的和大於第三邊」
銳角三角形的判斷方法：「兩短邊平方和 > 最長邊平方」(a^2 + b^2 > c^2)
鈍角三角形的判斷方法：「兩短邊平方和 < 最長邊平方」(a^2 + b^2 < c^2)
直角三角形的判斷方法：「兩短邊平方和 = 最長邊平方」(a^2 + b^2 = c^2)

(^代表平方)
(a為最短邊,b為中等長度邊,c為最長邊)

Input Format
(str)(空格)(int)(空格)(int)(空格)(int)
...
...
...
-1

Output Format
Not Triangle:(空格)str,str,str...
Acute Angle:(空格)str,str,str...
Obtuse Angle:(空格)str,str,str...
Right Angle:(空格)str,str,str...

若該分類群沒有任何木棒組，就列印"(空格)None"，例如：
Not Triangle:(空格)None

*請按照英文字母由小到大順序排列。
如：
Not Triangle: A,B <--正確格式
Not Triangle: B,A <--錯誤格式


Sample Input 1
A 3 4 5
B 6 8 10
C 4 5 6
D 3 3 3
E 5 9 20
F 6 6 11
-1
Sample Output 1
Not Triangle: E
Acute Angle: C,D
Obtuse Angle: F
Right Angle: A,B
Sample Input 2
A 3 4 5
B 6 8 10
C 4 5 6
D 3 3 3
E 5 9 20
F 6 6 6
G 7 19 111
H 20 333 23
-1
Sample Output 2
Not Triangle: E,G,H
Acute Angle: C,D,F
Obtuse Angle: None
Right Angle: A,B
Sample Input 3
A 3 4 5
B 6 8 10
C 4 5 6
K 10 10 6
M 2 2 2
P 2 3 4
L 1 2 4
E 5 9 20
F 6 6 6
G 7 19 111
H 20 333 23
-1
Sample Output 3
Not Triangle: E,G,H,L
Acute Angle: C,F,K,M
Obtuse Angle: P
Right Angle: A,B
Hint
1. 請注意英文字的大小寫，以及不要打錯字。
2. 請注意空格。
3. 若未能滿足輸出需求，不能部份給分，系統算多少分數就多少。
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define size 20
using namespace std;

int main(void){
    int a, b, c;
    int count = 0;
    string triangle_name[size];
    string not_triangle[size], acute_angle[size], obtuse_angle[size], right_angle[size];
    int not_triangle_count = 0, acute_angle_count = 0, obtuse_angle_count = 0, right_angle_count = 0;
    int len[size][3];

    //init
    for(int i=0; i<size; i++){
        triangle_name[i] = "";
        not_triangle[i] = "";
        acute_angle[i] = "";
        obtuse_angle[i] = "";
        right_angle[i] = "";
    }

    for(int i=0; i<size; i++){
        cin >> triangle_name[i];
        if(triangle_name[i] == "-1"){
            break;
        }
        for(int j=0; j<3; j++){
            cin >> len[i][j];
        }
        a = len[i][0];
        b = len[i][1];
        c = len[i][2];
        if(a + b < c || a + c < b || b + c < a){
            not_triangle[i] = triangle_name[i];
            not_triangle_count++;
        }
        else{
            if(pow(a,2) + pow(b,2) < pow(c,2) || pow(a,2) + pow(c,2) < pow(b,2) || pow(b,2) + pow(c,2) < pow(a,2)){
                obtuse_angle[i] = triangle_name[i];
                obtuse_angle_count++;
            }
            else if(pow(a,2) + pow(b,2) == pow(c,2) || pow(a,2) + pow(c,2) == pow(b,2) || pow(b,2) + pow(c,2) == pow(a,2)){
                right_angle[i] = triangle_name[i];
                right_angle_count++;
            }
            else{
                acute_angle[i] = triangle_name[i];
                acute_angle_count++;
            }
        }
    }

    cout << "Not Triangle: ";
    for(int i=0; i<not_triangle_count; i++){
        if(not_triangle[i] != ""){
            if(i == not_triangle_count - 1){
                cout << not_triangle[i];
            }
            else{
                cout << not_triangle[i] << ",";
            }
        }
    }
    cout << endl;
    cout << "Acute Angle: ";
    for(int i=0; i<size; i++){
        if(i == acute_angle_count-1){
            cout << acute_angle[i];
        }
        else{
            cout << acute_angle[i] << ",";
        }
    }
    cout << endl;
    cout << "Obtuse Angle: ";
    for(int i=0; i<size; i++){
        if(i == obtuse_angle_count-1){
            cout << obtuse_angle[i];
        }
        else{
            cout << obtuse_angle[i] << ",";
        }
    }
    cout << endl;
    cout << "Right Angle: ";
    for(int i=0; i<size; i++){
        if(i == right_angle_count-1){
            cout << right_angle[i];
        }
        else{
            cout << right_angle[i] << ",";
        }
    }
    cout << endl;
    
    return 0;
}