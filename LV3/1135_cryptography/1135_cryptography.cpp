/*
主題
if else + for loop + 陣列

說明

有一天Alice要寄一個資料給BOB.
但是她知道網絡上寄文件是很不安全的。
所以她跟BOB 説好了，BOB要的資料將會是Alice給出去的資料裏的中位數。
請你找出BOB所要拿到的特殊值。（中位數）。
Alice 一共會傳給BOB N 個整數， 0 < N < 100000。
其中每一個整數 A[i], 0< A[i] < 10000。
請你求出這個數列的中位數。
Alice 爲了讓BOB方便找到答案，Alice 給出的數字都已經小到大排序完成。
他們也定了一個秘密，若 N 是雙數的話中位數就取中間兩個數相加后除以二（然後進位）。

舉例：
N= 5 （一共有5個數字）
A[5]={2,4,6,7,9}
中位數為6。所以輸出"6\n"

N= 8
A[8]={1,7,7,9,14,14,16,19}
中位數為 (9+14)/2=11.5 = 12 (進位),所以輸出"12\n"

Input Format
一開始輸入一個整數 N, 0<N<100000。 代表Alice一共傳給BOB幾個數字。
接下來一行有N 個整數，分別表示第 A[i],(0<A[i]<=100000) 代表第幾個數字。

Output Format
一個整數，輸出中位數。（有小數請進位）

Sample Input 1
5
2 4 6 7 9
Sample Output 1
6
Sample Input 2
8
1 7 7 9 14 14 16 19
Sample Output 2
12
Hint
原始輸入可能會有多餘空白造成split後的list會有多餘的空字串，請務必處理。
請注意印出答案后要空行。小數要進位（四捨五入）。
這題有需要用到 double 還是float 嗎？
有沒有只用 int 就可以做到的方法？
若是用到浮點數的話，務必注意，浮點數的儲存為近似值，易造成四捨五入的誤差，請務必處理。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    long int N;
    cin >> N;
    double input[N];

    for(int i=0; i<N; i++){
        cin >> input[i];
    }

    if(N % 2 == 1){
        cout << input[N/2] << endl;
    }
    else{
        if((input[N/2-1] + input[N/2])/2 - floor((input[N/2-1] + input[N/2])/2) >= 0.5){
            cout << floor((input[N/2-1] + input[N/2])/2) + 1 << endl;
        }
        else{
            cout << floor((input[N/2-1] + input[N/2])/2) << endl;
        }
    }
    
    return 0;
}