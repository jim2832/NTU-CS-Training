/*
Task Description
請撰寫一程式，令使用者輸入一數字N，接著連續輸入N個數字
請找出，這些數字的最大值、最小值及其位置。
Input format
第一行輸入整數N，0≤N≤1000000
接下來1~N行，輸入均為整數，0≤1~N≤1000000

Output format
最大值(整數) 第一個最大值的位置(整數) 最後一個最大值的位置(整數，如果有多個的話才輸出，沒有的話不用)
第二大值(整數) 第一個第二值的位置(整數) 最後一個第二大值的位置(整數，如果有多個的話才輸出，沒有的話不用)
最小值(整數) 第一個最小值的位置(整數) 最後一個最小值的位置(整數，如果有多個的話才輸出，沒有的話不用)
第二小值(整數) 第一個第二小值的位置(整數) 最後一個第二小值的位置(整數，如果有多個的話才輸出，沒有的話不用)

Sample input 1
11
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
2
Sample output 1
8 2
7 9
1 1 10
2 4 11
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
8 2 7
1 1
2 12
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, max = 0, min = 1000, max_pos, min_pos, final_max_pos = -1, final_min_pos = -1;
    int second_max = 0, second_min = 1000, second_max_pos, second_min_pos, final_second_max_pos = -1, final_second_min_pos = -1;
    int same_count = 0;
    bool same = false;
    cin >> N;
    int input[N];

    //判斷最大值和最小值及其位置
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

    //判斷第二大值和第二小值及其位置
    for(int i=0; i<N; i++){
        if(second_max < input[i] && input[i] < max){
            second_max = input[i];
            second_max_pos = i;
        }
        if(second_min > input[i] && input[i] > min){
            second_min = input[i];
            second_min_pos = i;
        }
        //所有input都一樣的例外狀況
        if(input[i] == input[0]){
            same_count++;
        }
        if(same_count == N){
            second_max = max;
            second_max_pos = max_pos;
            second_min = min;
            second_min_pos = min_pos;
        }
    }
    
    //找其他可能的位置
    for(int i=0; i<N; i++){
        if(max == input[i] && i != max_pos){
            final_max_pos = i;
        }
        if(min == input[i] && i != min_pos){
            final_min_pos = i;
        }
        if(second_max == input[i] && i != second_max_pos){
            final_second_max_pos = i;
        }
        if(second_min == input[i] && i != second_min_pos){
            final_second_min_pos = i;
        }
    }

    //output
    cout << max << " " << max_pos + 1;
    if(final_max_pos != -1){
        cout << " " << final_max_pos + 1 << endl;
    }
    else{
        cout << endl;
    }

    cout << second_max << " " << second_max_pos + 1;
    if(final_second_max_pos != -1){
        cout << " " << final_second_max_pos + 1 << endl;
    }
    else{
        cout << endl;
    }

    cout << min << " " << min_pos + 1;
    if(final_min_pos != -1){
        cout << " " << final_min_pos + 1 << endl;
    }
    else{
        cout << endl;
    }

    cout << second_min << " " << second_min_pos + 1;
    if(final_second_min_pos != -1){
        cout << " " << final_second_min_pos + 1 << endl;
    }
    else{
        cout << endl;
    }
    
    return 0;
}