/*
說明
在平面座標X、Y上，A、B、C三點的位置分別為(a,b)、(c,d)、(e,f)。
若要計算A與B兩點距離，其公式為：




而這三個點的直線可以圍成一個三角形
請利用海龍公式(Heron's formula)計算出三角形的面積。
公式如下：




Input Format
int/float int/float
int/float int/float
int/float int/float
(輸入為三行，每行各兩個整數或浮點數，且中間以空格隔開）

Output Format
三角形面積 (四捨五入至小數點後二位，就算是整數也要至小數點第二位）
(請在列印出三角形面積時再四捨五入，不要再算三邊的長度時就四捨五入)

Sample Input 1
0 0
3 0
0 4
Sample Output 1
6.00
Sample Input 2
1 2
4 6
7 8
Sample Output 2
3.00
Sample Input 3
0 0
3 0
4 0
Sample Output 3
0.00
Sample Input 4
1 1
2 2
10 10
Sample Output 4
0.00
*注意：此題三點共線，海龍公式可能會跑出錯誤，但必須處理讓三點共線列印出0.00
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    float Ax, Ay;
    float Bx, By;
    float Cx, Cy;
    float AB, AC, BC;
    string zero = "0.00";

    scanf("%f %f", &Ax, &Ay);
    scanf("%f %f", &Bx, &By);
    scanf("%f %f", &Cx, &Cy);

    //三點共線
    if((Ay-By)/(Ax-Bx)==1 && (Ay-Cy)/(Ax-Cx)==1 && (By-Cy)/(Bx-Cx)==1){
        cout << zero << endl;
    }
    else{
        AB = sqrt(pow(Ax-Bx, 2) + pow(Ay-By, 2));
        AC = sqrt(pow(Ax-Cx, 2) + pow(Ay-Cy, 2));
        BC = sqrt(pow(Bx-Cx, 2) + pow(By-Cy, 2));

        float half_perimeter = (AB+AC+BC)/2; //半周長
        float area = sqrt(half_perimeter*(half_perimeter-AB)*(half_perimeter-AC)*(half_perimeter-BC));

        printf("%.2f\n", area);
    }

    return 0;
}