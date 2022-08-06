/*
分水嶺演算法(Watershed Algorithm)為影像處理中常用的分割方法，中心思想是將影像中每一像素值代表一海拔高度，接著將水注入影像中，最後得到切割結果
請撰寫一支程式，令使用者輸入一個數字N，代表接下來要輸入幾個分水嶺的高度
輸入完後N個分水嶺後，在每一個分水嶺之間開始注水，並計算可以組成高度最高的水平面的兩個分水嶺的位置，與其所容納的水量(假設每個分水嶺之間距離為1)，以下圖為例：
Watershed
Watershed
Input Sample for the Figure
6
6
3
7
5
3
4
Output Sample for the Figure
1 3
12
Input format
第一行輸入整數N，0≤N≤1000000
接下來1~N行，輸入均為整數，0≤1~N≤1000000

Output format
整數A(空格) 整數B(代表可組成的高度最高的水平面是哪兩個分水嶺，由小到大)
整數C(所組成最高的分水領的面積)

Sample input 1
10
1
8
6
2
5
4
6
3
7
6
Sample output 1
2 9
49
Sample input 2
12
1
8
9
8
5
9
8
5
6
9
5
2
Sample output 2
6 10
36
Hint
如果有多個分水領內含的水一樣高，請印出面積最大的那個
如果有多個分水領內含的水一樣多且一樣高，請印出第一個
If there are multiple watersheds with same highest level, print the result with largest volume.
If there are multiple watersheds with same highest level and same water volume, print the first result.
*/

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){
    int N, area, max_area = 0;
    cin >> N;
    int input[N];

    for(int i=0; i<N; i++){
        cin >> input[N];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            
        }
    }
    
    return 0;
}