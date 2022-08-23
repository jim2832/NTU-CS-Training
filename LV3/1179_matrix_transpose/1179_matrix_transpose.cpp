/*
說明
令使用者輸入一矩陣的高h與寬w，之後輸入矩陣的內容，之後依序印出此矩陣翻轉與旋轉的結果。

Input Format
第一行為高與寬，各位整數
第二行之後為矩陣的內容，每個數字中間以一空白間隔

Output Format
以下輸出的矩陣內容，每個數字佔5格並靠右對齊，每行結尾後無空白
第一組 正常列印
第二組 右上角與左下角鏡射 (轉換矩陣)(轉置)
第三組 左上角與右下角鏡射
第四組 上下倒並左右相反
第五組 順時鐘旋轉
第六組 逆時鐘旋轉

Sample Input
3 4
1 2 3 4
5 6 7 8
9 10 11 12
Sample Output
    1    2    3    4
    5    6    7    8
    9   10   11   12
 
    1    5    9
    2    6   10
    3    7   11
    4    8   12
 
   12    8    4
   11    7    3
   10    6    2
    9    5    1
 
   12   11   10    9
    8    7    6    5
    4    3    2    1
 
    9    5    1
   10    6    2
   11    7    3
   12    8    4
 
    4    8   12
    3    7   11
    2    6   10
    1    5    9
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int row, col;
    cin >> row >> col;
    int matrix[row][col];

    //input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }

    //origin
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j] < 10){
                cout << "    " << matrix[i][j];
            }
            else{
                cout << "   " << matrix[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;

    //transpose
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            if(matrix[j][i] < 10){
                cout << "    " << matrix[j][i];
            }
            else{
                cout << "   " << matrix[j][i];
            }
        }
        cout << endl;
    }
    cout << endl;

    //左上角與右下角鏡射
    for(int i=col-1; i>=0; i--){
        for(int j=row-1; j>=0; j--){
            if(matrix[j][i] < 10){
                cout << "    " << matrix[j][i];
            }
            else{
                cout << "   " << matrix[j][i];
            }
        }
        cout << endl;
    }
    cout << endl;

    //上下倒並左右相反
    for(int i=row-1; i>=0; i--){
        for(int j=col-1; j>=0; j--){
            if(matrix[i][j] < 10){
                cout << "    " << matrix[i][j];
            }
            else{
                cout << "   " << matrix[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;

    //順時鐘旋轉
    for(int i=0; i<col; i++){
        for(int j=row-1; j>=0; j--){
            if(matrix[j][i] < 10){
                cout << "    " << matrix[j][i];
            }
            else{
                cout << "   " << matrix[j][i];
            }
        }
        cout << endl;
    }
    cout << endl;

    //逆時鐘旋轉
    for(int i=col-1; i>=0; i--){
        for(int j=0; j<row; j++){
            if(matrix[j][i] < 10){
                cout << "    " << matrix[j][i];
            }
            else{
                cout << "   " << matrix[j][i];
            }
        }
        cout << endl;
    }
    
    return 0;
}