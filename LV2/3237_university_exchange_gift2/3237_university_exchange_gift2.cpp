/*
Task Description
奧麗弗是WASP-127b行星的住民，獲邀參加外星俱樂部舉辦的交換禮物活動，在這個派對中會有來自不同星球的代表，因此奧麗弗決定以WASP-127b中特產的原礦來做為禮物。
奧麗弗採購了N包原礦，廠商非常用心地篩選使得每包原礦的個數都相同，但細心的奧麗弗卻發現每包的質量都不等，因此奧麗弗決定將次重的一包留給自己，最重的一包與第三重的一包合起來作為禮物。
最終禮物由WASP-777 行星的代表取得，該代表非常的開心，於是親自寫下明信片給奧麗佛，信中提及的質量卻使得奧麗弗疑惑了一下。
經詢問後，奧麗弗發現兩星球所使用的進位制不相等，已知WASP-127b使用10進位制，而WASP-777星球是以7進位制來計量，請算出信中提及的7進位制質量為何?
Constraints
已知奧麗弗和代表二者所量測的質量沒有誤差，兩邊皆已kg為單位，且過程中原礦的質量不會減少。
0 ≤ i < N
2 < N < 2000
0 <  < 3001
 不會有重複的

Input format
第一行為每包原礦的質量，以十進位制表示
最後輸入-1做為輸入的結束，共N筆資料(不含-1)。

Output format
請輸出信中提及的7進位制質量為何

Sample input 1
10 7 8 6 -1
Sample output 1
23
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, max = 0, second_max = 0, third_max = 0;
    int sum = 0, i = 0, count = 0;

    int temp, input[10000], number[1000];

    //init
    for(int i=0; i<10000; i++){
        input[i] = 0;
    }

    while(true){
        cin >> temp;
        if(temp == -1){
            break;
        }
        input[count] = temp;
        count++;
    }
    N = count;

    //init
    for(int i=0; i<1000; i++){
        number[i] = -1;
    }

    //find max
    for(int i=0; i<N; i++){
        if(max < input[i]){
            max = input[i];
        }
    }

    //find second max
    for(int i=0; i<N; i++){
        if(second_max < input[i] && input[i] < max){
            second_max = input[i];
        }
    }

    //find third max
    for(int i=0; i<N; i++){
        if(third_max < input[i] && input[i] < second_max){
            third_max = input[i];
        }
    }

    sum = max + third_max;

    //轉成7進位
    while(sum > 0){
        int temp = sum % 7;
        number[i] = temp;
        sum /= 7;
        i++;
    }

    for(int i=999; i>=0; i--){
        if(number[i] != -1){
            cout << number[i];
        }
    }
    
    return 0;
}