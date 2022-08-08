/*
Task Description
請撰寫一程式，令使用者輸入一數字N，接著連續輸入N個數字
請找出，這些數字的最大值、最小值及其位置。
Input format
第一行輸入整數N，0≤N≤1000000
接下來1~N行，輸入均為整數，0≤1~N≤1000000

Output format
最大值(整數) 第一個最大值的位置(整數) 最後一個最大值的位置(整數，如果有多個的話才輸出，沒有的話不用)
最小值(整數) 第一個最小值的位置(整數) 最後一個最小值的位置(整數，如果有多個的話才輸出，沒有的話不用)

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
1
Sample output 1
8 2
1 1 10
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
9 3 10
1 1
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, max = 0, min = 1000, max_pos, min_pos, final_max_pos = -1, final_min_pos = -1;
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

    for(int i=0; i<N; i++){
        if(max == input[i] && i != max_pos){
            final_max_pos = i;
        }
        if(min == input[i] && i != min_pos){
            final_min_pos = i;
        }
    }
    
    if(final_max_pos != -1 && final_min_pos == -1){
        cout << max << " " << max_pos + 1 << " " << final_max_pos + 1 << endl << min << " " << min_pos + 1 << endl;
    }
    else if(final_max_pos == -1 && final_min_pos != -1){
        cout << max << " " << max_pos + 1 << endl << min << " " << min_pos + 1 << " " << final_min_pos + 1 << endl;
    }
    else if(final_max_pos != -1 && final_min_pos != -1){
        cout << max << " " << max_pos + 1 << " " << final_max_pos + 1 << endl << min << " " << min_pos + 1 << " " << final_min_pos + 1 << endl;
    }
    else{
        cout << max << " " << max_pos + 1 << endl << min << " " << min_pos + 1 << endl;
    }
    
    return 0;
}