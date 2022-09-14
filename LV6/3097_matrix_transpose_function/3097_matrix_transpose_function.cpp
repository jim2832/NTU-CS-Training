/*
說明
程式語言的矩陣運算解決了我們對於多維空間的處理。
而python裡面的numpy，它提供了python使用者簡便的方法來做矩陣的運算。
在解多項式的解、統計估計值的運算等很多都必須用到轉置矩陣(Transpose)。
轉置矩陣我們通常在矩陣的右上角標註T。

轉置矩陣的公式如下：





例如一個二維矩陣[[1,2,3],[4,5,6]]
可以看成：
[[1,2,3],
[4,5,6]]
而把它的轉置矩陣為[[1,4],[2,5],[3,6]]
也可看成：
[[1,4],
[2,5],
[3,6]]

*注意*

本題請建立def Matrix_T(MatrixA)函數。
傳入值MatrixA為二維陣列，例如 [[1,2],[3,4]]或[[1,2],[4,5],[6,7]]或[[1,2,3],[4,5,6]]。
本題不需要傳出值。
print可直接寫在def Matrix_T()底下。

Input Format
多個整數中間以空格隔開
多個整數中間以空格隔開
...
...
q

Output Format
多個整數中間以空格隔開
多個整數中間以空格隔開

Sample Input 1
1 2
3 4
q
Sample Output 1
1 3
2 4
Sample Input 2
1 2 3
4 5 6
q
Sample Output 2
1 4
2 5
3 6
Sample Input 3
1 2
3 4
5 6
q
Sample Output 3
1 3 5
2 4 6
Sample Input 4
1 2 3
4 5 6
7 8 9
q
Sample Output 4
1 4 7
2 5 8
3 6 9
Hint
1. 方陣(n乘n)的subtask有8題。
   - 2x2有5題
   - 3x3有1題
   - 8x8有1題
   - 10x10有1題
2. 非方陣(n乘m)的subtask有2題。
   - 2x3有1題
   - 3x2有1題
3. 禁止使用numpy套件。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int Matrix_T(int *MatrixA){

}

int main(void){
    
    
    return 0;
}