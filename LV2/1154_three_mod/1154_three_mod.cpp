/*
Task Description
寫一支程式統計有多少數字被 3 除之後，餘 0、餘 1和餘 2。

Input format
第一行輸入整數的數量n。
以下n行每行都有一個輸入整數。

Output format
輸出為3n，3n + 1，3n + 2的整數的數量。

Sample input 1
5
1
2
3
4
5
Sample output 1
1 2 2
Sample input 2
13
238378
511725
681619
657626
496833
754387
780615
214980
579930
354966
418806
91753
876232
Sample output 2
7 5 1
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, mod_0 = 0, mod_1 = 0, mod_2 = 0;
    cin >> n;
    int input[n];

    for(int i=0; i<n; i++){
        cin >> input[n];
        if(input[n] % 3 == 0){
            mod_0++;
        }
        else if(input[n] % 3 == 1){
            mod_1++;
        }
        else{
            mod_2++;
        }
    }
    cout << mod_0 << " " << mod_1 << " " << mod_2 << endl; 
    
    return 0;
}