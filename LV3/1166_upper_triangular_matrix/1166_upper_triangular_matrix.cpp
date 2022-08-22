/*
Task Description
寫一個程序來解決方程系統。以高度為n乘n的三角矩陣 A 還有一個 n 乘 1的向量 y，我們想找到另外一個n乘1的向量x。所以 Ax = y。由於A是上三角形，即，對角線下方的所有元素為零，我們可以使用一個名為反向代回法（Back Substitution）的簡單過程來獲取向量x。自$A_{n,n} \times x_n=y_n$，所以我們得出結論，$x_n = y_n / A_{n,n}$。既然我們知道$x_n$現在，我們可以輕鬆計算$x_{n-1}$，然後$x_{n-2}$，依此類推，直到我們最後計算出$x_1$。


$Ax = y$
$Ax = y$
Input
輸入的第一行為行數和列的大小n。n介於1到16之間。
下一個n行中的每一行中都有n個A中的雙精度浮點數數字。
以下每個n行為y中的數字。請注意，矩陣和向量的所有元素都是雙精度浮點數。

Output
輸出有n行。每行都是x中的數字。您應該以小數點後第六位格式輸出雙倍雙精度浮點數數字。

Sample input
3
1.0 2.0 3.0
0.0 2.0 1.0
0.0 0.0 4.0
2.0
3.0
-4.0
Sample output
1.000000
2.000000
-1.000000
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;
    double A[n][n];
    double x[n];
    double y[n];

    //input A
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> A[i][j];
        }
    }

    //input y
    for(int i=0; i<n; i++){
        cin >> y[n];
    }

    for(int i=n-1; i>=0; i--){
        for(int j=i+1; j<n; j++){
            y[i] -= A[i][j]*x[j];
        }
        x[i] = y[i];
        x[i] /= A[i][i];
    }

    for(int i=0; i<n; i++){
        cout << x[i] << endl;
    }
    
    return 0;
}