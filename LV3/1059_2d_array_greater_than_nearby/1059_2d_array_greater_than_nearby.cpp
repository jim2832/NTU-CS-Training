/*
Task Description
請撰寫一程式，讀入一個 $r$ 行 $c$ 列的二維整數陣列，找到那些格子上的數字皆大於它的鄰近格子上的數字，鄰近只有限制在它的上下左右四格。如果有多個答案，從上而下、由左而右依序印出。
限制 $r$ 與 $c$ 不會超過100
Input Format
輸入中有$ r+1 $行。第一行有$ r $和$ c $。接下來輸入$ r $行，每一行都有$ c $個整數。
Output Format
輸出中有$ k $行，其中$ k $是大於鄰居的元素數。
Sample Input
2 3
7 8 3
4 5 6
Sample Output
8
6
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

    //judge
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            //第一列
            if(i == 0){
                if(j == 0){
                    if(matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i][j+1]){
                        cout << matrix[i][j] << endl;
                    }
                }
                else if(j == col-1){
                    if(matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i][j-1]){
                        cout << matrix[i][j] << endl;
                    }
                }
                else{
                    if(matrix[i][j] > matrix[i][j-1] && matrix[i][j] > matrix[i][j+1] && matrix[i][j] > matrix[i+1][j]){
                        cout << matrix[i][j] << endl;
                    }
                }
            }
            //最後一列
            else if(i == row-1){
                if(j == 0){
                    if(matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i][j+1]){
                        cout << matrix[i][j] << endl;
                    }
                }
                else if(j == col-1){
                    if(matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i][j-1]){
                        cout << matrix[i][j] << endl;
                    }
                }
                else{
                    if(matrix[i][j] > matrix[i][j-1] && matrix[i][j] > matrix[i][j+1] && matrix[i][j] > matrix[i-1][j]){
                        cout << matrix[i][j] << endl;
                    }
                }
            }
            //第一行
            else if(j == 0){
                if(matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i][j+1]){
                    cout << matrix[i][j] << endl;
                }
            }
            //最後一行
            else if(j == col-1){
                if(matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i][j-1]){
                    cout << matrix[i][j] << endl;
                }
            }
            //其餘
            else{
                if(matrix[i][j] > matrix[i-1][j] && matrix[i][j] > matrix[i+1][j] && matrix[i][j] > matrix[i][j-1] && matrix[i][j] > matrix[i][j+1]){
                    cout << matrix[i][j] << endl;
                }
            }
        }
    }
    
    return 0;
}