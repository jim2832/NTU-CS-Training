/*
Task Description
國立台灣大學希望通過將非法停放的自行車移動到遙控停車場來實施自行車停車條例。這些非法停放的自行車有n個停車位。 第i保停車場位於\( (x_i, y_i) \)上，具有 ( c_i ) 自行車的容量。 非法停放的自行車將被移至最近的停車場。自行車與停車場之間的距離是它們在x和y坐標中的絕對值的總和。例如，（1,3）和（ - 2,2）之間的距離為3 + 1 = 4。如果有兩個最近的停車場，那麼我們選擇具有較小x坐標的那個。如果x坐標是相同的，那麼我們選擇具有較小y坐標的那個。如果所有最近的停車場都滿了，已經停了他們最高容量那麼多的腳踏車，山自行車將被移動到第二個最近的停車場之一，等等。保證所有停車場的容量足以讓所有非法停放的自行車。現在鑑於所有停車場的位置和能力，請確定一列的非法停放的自行車所應該停在哪些停車場。

Input
輸入的第一行是停車場數量n。
以下每個n行都有x，y坐標和停車場的容量。
下一行有一個整數m，為非法停放的自行車的數量。
以下m行中的每一行都有自行車的x和y坐標。
自行車將根據輸入中的順序移動。

Output
輸出有n行。第i行是在所有m台自行車搬到停車場後，自行車在第i個停車場的數量。

Bounds
n為正值，不超過10。
m為正值，不超過100000。
x和y坐標都在-10000和10000之間。

Sample input
2
1 1 1
100 100 100
3
0 0
2 2
3 3
Sample output
1
2
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    
    
    return 0;
}