/*
說明
程式語言的矩陣運算解決了我們對於多維空間的處理。
而python裡面的numpy，它提供了python使用者簡便的方法來做矩陣的運算。
在解多項式的解、統計估計值的運算等很多都必須用到反矩陣。

而一個2x2的反矩陣的公式如下：




如一個2x2矩陣X如下：
[[1,2],
[3,4]] det(X) = 14 - 23 = -2

反矩陣 (X^-1) 為
[[4,-2],
[-3,1]]
裡面的在除上det(X)
也就等於
[[-2,1],
[1.5,-0.5]]



*注意*

本題請建立def Matrix_Inverse(MatrixA)函數。
傳入值MatrixA為二維陣列，例如 [[1,2],[3,4]]。
本題不需要傳出值。
print可直接寫在def Matrix_Inverse()底下。

Input Format
兩個整數中間以空格隔開
兩個整數中間以空格隔開

Output Format
兩個整數中間以空格隔開
兩個整數中間以空格隔開
(無論整數還是小數，請全部四捨五入到小數點第一位)

Sample Input 1
1 2
3 4
Sample Output 1
-2.0 1.0
1.5 -0.5
Sample Input 2
1 1
1 1
Sample Output 2
none
Sample Input 3
0 1
1 0
Sample Output 3
0.0 1.0
1.0 0.0
*****注意*****
如果輸出有0的話，就是輸出0.0，不能輸出-0.0。
Sample Input 4
50 60
70 80
Sample Output 4
-0.4 0.3
0.4 -0.2
*****注意*****
0.35 進到小數點第一位務必確保為 0.4
Hint
print('%.2f'%3) = 3.00
函數名稱一定要是Matrix_Inverse()，一定要一模一樣，而傳入要是二維List。
在python中，如果0.25四捨五入到小數點第一位會是0.2 這樣會造成比較大的誤差，請修正它如果測資4和7無法通過請務必檢查，而0.251四捨五入到小數點第一位是0.3。造成誤差的原因
四捨五入語法為round(需要被四捨五入的數字,到小數點後幾位)。（也可以用格式化輸出來四捨五入)
例如：round(0.25,1) = 0.2；round(0.251,1) = 0.3
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;

void Matrix_Inverse(int matrix[2][2]){
    double temp[2][2];
    int det = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

    if(det == 0){
        cout << "none" << endl;
        return;
    }

    temp[0][0] = (double)matrix[1][1] / det;
    temp[0][1] = (double)-matrix[0][1] / det;
    temp[1][0] = (double)-matrix[1][0] / det;
    temp[1][1] = (double)matrix[0][0] / det;

    for(int i=0; i<2; i++){
        for(int j=0 ;j<2; j++){
            temp[i][j] += 0.01;
            if(j == 0){
                if(temp[i][j] == 0){
                    printf("%.1f ", 0.0);
                }
                else{
                    printf("%.1f ", round(temp[i][j] * 100) / 100.0);
                }
            }
            else{
                if(temp[i][j] == 0){
                    printf("%.1f", 0.0);
                }
                else{
                    printf("%.1f", round(temp[i][j] * 100) / 100.0);
                }
            }
        }
        cout << endl;
    }
}

int main(void){
    int matrix[2][2];

    for(int i=0; i<2; i++){
        for(int j=0 ;j<2; j++){
            cin >> matrix[i][j];
        }
    }

    Matrix_Inverse(matrix);
    
    return 0;
}