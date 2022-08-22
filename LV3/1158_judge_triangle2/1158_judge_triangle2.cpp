/*
Task Description
平面上座標上，給定三角形的三個頂點座標，決定是否為等腰、銳角、鈍角或者是直角三角形。你可以假設所有座標皆為整數。特別注意，如果一個三角形為等腰三角形，那麼就不必回報它是否為銳角或鈍角。 為了防止計算誤差，若需要紀錄三角形的三邊長，最好使用其邊長的平方儲存，假設三邊長由長到短分別為 $a$, $b$, $c$，那麼只需要比較 $a^2$, $b^2$, $c^2$ 之間的關係即可得到。


Input format
第一行包含一個整數，$ N $，指示以下輸入案例的數量。以下是$ n $行，每個$ n $行，每個都包含六個整數，$ x_1，y_1，x_2，y_2，x_3，y_3 $，這是三角形三個頂點的三個坐標。每個整數都是非負數，小於1,000。所有輸入數據都將正確地形成三角形。

Output format
對於每種情況，打印三角形，等效，急性，鈍或右的類型。

Sample input
4
0 0 1 1 1 0
0 0 1 3 3 0
0 0 1 1 3 0
0 0 1 2 1 0
Sample output
isosceles
acute
obtuse
right
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N;
    int a, b, c;
    cin >> N;
    int triangle[N][6];
    string type[N];

    //input
    for(int i=0; i<N; i++){
        for(int j=0; j<6; j++){
            cin >> triangle[i][j];
        }
    }

    for(int i=0; i<N; i++){
        a = pow(triangle[i][2] - triangle[i][0], 2) + pow(triangle[i][3] - triangle[i][1], 2);
        b = pow(triangle[i][4] - triangle[i][0], 2) + pow(triangle[i][5] - triangle[i][1], 2);
        c = pow(triangle[i][4] - triangle[i][2], 2) + pow(triangle[i][5] - triangle[i][3], 2);

        if(a == b || a == c || b == c){ //等腰
            type[i] = "isosceles";
        }
        else if(a+b==c || a+c==b || b+c==a){ //直角
            type[i] = "right";
        }
        else if(a+b<c || a+c<b || b+c<a){ //鈍角
            type[i] = "obtuse";
        }
        else{ //銳角
            type[i] = "acute";
        }
    }

    for(int i=0; i<N; i++){
        cout << type[i] << endl;
    }
    
    return 0;
}