/*
Task Description
編寫一個程序以首先讀取二維整數陣列的列數(rows)（$r$）和行數(column)（$c$），然後按列讀取數組元素。最後打印每個行(column)的平均值（整數），$r$和$c$不超過$ 100 $。
Input Format
輸入中有r+1列。第一列輸入$r$和$c$。第一列之後的每一列中的一行中都有$c$個整數。
Output Format
輸出中有$c$列。第i個表示第i行的平均值。
Sample Input
2 3
1 2 3
4 5 6
Sample Output
2
3
4
輸入測資內容有可能只有一列如下：

2 3
1 2 3 4 5 6
你需要自行切開

Hint
中文的行與列在不同國家的定義不同(尤其是台灣都跟人家不一樣)，有時會有些混淆，可以看英文版較準。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int row, col, avg;
    cin >> row >> col;
    int matrix[row][col];
    int column_avg[col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> matrix[i][j];
        }
    }

    for(int i=0; i<col; i++){
        avg = 0;
        for(int j=0; j<row; j++){
            avg += matrix[j][i];
        }
        avg /= row;
        cout << avg << endl;
    }
    
    return 0;
}