/*
Task Description
請撰寫一程式，令使用者輸入一數字N，接著連續輸入N個數字
請找出，這些數字的最大值、最小值及其位置。
Input format
第一行輸入整數N，0≤N≤1000000
接下來1~N行，輸入均為整數，0≤1~N≤1000000

Output format
最大值(整數) 最大值的位置(整數)
最小值(整數) 最小值的位置(整數)
※如果有多個最大/小值，請輸出第一次出現的位置

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
8 2
1 1
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
9 3
1 1
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, max = 0, min = 1000, max_pos, min_pos;
    cin >> N;
    int input[N];

    for(int i=0; i<N; i++){
        cin >> input[i];
        if(max < input[i]){
            max = input[i];
            max_pos = i;
        }
        if(min > input[i]){
            min = input[i];
            min_pos = i;
        }
    }

    cout << max << " " << max_pos + 1 << endl << min << " " << min_pos + 1 << endl;
    
    return 0;
}