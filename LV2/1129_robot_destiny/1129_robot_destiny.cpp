/*
Task Description
寫一個程序來預測兩個機器人的命運。假設我們有兩個機器人在M（水平）乘N（垂直）單位的網格上運行。 兩者都會以一個方格的速度移動。 第一個機器人承載F1的燃料量，第二個機器人攜帶F2的燃料量。 如果機器人耗盡燃料，它將停止在該方格。 移動到一個新的廣場需要一個單位的燃料。 在第一個N1時間步驟中，第一個機器人R1將向北方移動，然後在下一個E1時間步驟，它將向東移動。第一個機器人將重複此模式，直到它耗盡燃料。 第二個機器人R2將以稍微不同的方式移動。在第一個E2時間步驟中，第二個機器人R2將向東方移動，然後在下一個N2時間步驟，它將向北移動。再次，第二個機器人將重複這種模式，直到它耗盡燃料。 如果機器人移動到了邊界之外，它將傳送並重新出現（透過某種魔法）在該領域的另一側。 例如，如果m = 7和n = 6和一個機器人在（5,5）往北走，它將在（5,0）重新出現。 此外，如果兩個機器人進入同一方格中，則它們會爆炸。現在給出了（x1，y1）的第一個機器人的起始位置，以及（x2，y2）的第二個機器人的起始位置，以及他們攜帶的燃料量（f1和f2），確定是否這兩個機器人將爆炸或不爆炸。
Input Format
只有一行輸入包含$M, \; N, \; X1, \; Y1, \; E1, \; N1, \; F1, \; X2, \; Y2, \; E2, \; N2, \; F2$，以下為其限制
$0 \lt N, \; M \lt 10000$
$0 \le X1, \; X2 \lt M$
$0 \le Y1, \; Y2 \lt N$
$(X1, Y1) \text{ is not } (X2, Y2)$
$0 \lt N1, \; E1, \; N2, \; E2$
$0 \le F1, \; F2 \le 10000$
Output Format
輸出有兩種情況。
如果兩個機器人將爆炸，輸出機器人在時間T爆炸(robots explode at time T)，其中T是他們爆炸的時間步。
否則輸出機器人不會爆炸(robots will not explode)。
Sample input
7 6 2 0 9 2 100 3 5 2 7 100
Sample output
robots explode at time 5
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int M, N;
    int X1, Y1, E1, N1, F1; //robot1
    int X2, Y2, E2, N2, F2; //robot2
    cin >> M >> N >> X1 >> Y1 >> E1 >> N1 >> F1 >> X2 >> Y2 >> E2 >> N2 >> F2;
    int time = 0;
    bool explosion = false;

    while(!explosion){
        time++;
    }
    
    return 0;
}