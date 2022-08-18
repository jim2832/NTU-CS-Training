/*
Task Description
編寫一個程序來讀取一正整數 $ N $和長度為$ N $的正整數序列，然後分別印出二行數列。
第一行是奇數，第二行是偶數，其順序與輸入順序相同，不可打亂。 限制$ N $不超過1000。
Input Format
輸入中有兩行，第一行為一正整數$ N $。第二行有$ N $個正整數。
Output Format
根據描述輸出二行，第一行是奇數數列，第二行是偶數數列。
Sample Input
5
3 6 7 9 20
Sample Output
3 7 9
6 20
特別注意
若在行尾輸出多餘的空白字元，你將會得到 Wrong Answer
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, odd_count = 0, even_count = 0;
    int odd[1000], even[1000];
    cin >> N;

    //init
    for(int i=0; i<1000; i++){
        odd[i] = -1;
        even[i] = -1;
    }

    //input
    int input[N];
    for(int i=0; i<N; i++){
        cin >> input[i];
        if(input[i] % 2 == 1){
            odd[odd_count] = input[i];
            odd_count++;
        }
        else{
            even[even_count] = input[i];
            even_count++;
        }
    }

    //output
    for(int i=0; i<1000; i++){
        if(odd[i] != -1){
            if(i == odd_count - 1){
                cout << odd[i];
            }
            else{
                cout << odd[i] << " ";
            }
        }
    }
    cout << endl;
    for(int i=0; i<1000; i++){
        if(even[i] != -1){
            if(i == even_count - 1){
                cout << even[i];
            }
            else{
                cout << even[i] << " ";
            }
        }
    }
    
    return 0;
}