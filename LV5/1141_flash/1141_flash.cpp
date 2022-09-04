/*
主題
pointer 指標

說明
 
Flash 閃電俠，世界最快的男人。
追溯回Flash能力的由來是通過吸入硬水水汽（後因追溯連續性變成重水汽）
而得到極速行動的能力。而那個水汽意外的也泄露出去了，散佈在Flash的城市中。
所以，所有吸到的人都有機會變成超能力者。所以,Flash并不是唯一的超能力者。
而今天研究發現，只要人體内散發出的Gamma射綫超越這城市平均就是隱藏能力者。
給予城市裏的人數量為 N。 0 一個指標陣列A, 0<=A[i]<5000。代表各人發出的Gamma射綫的值。
目標，求出一共有多少人是隱藏能力者（嚴格大於平均，等於不算）。

例子：
N=6
A[i]={1, 3, 2, 5, 6, 3}
平均等於 20/6 = 3.333 ，所以輸出"2\n" 共兩個人大於平均。

N=3
A[i]={2,2,2}
平均等於 6/3=2 所以沒人大於平均，輸出"0\n"

Input Format
一開始輸入一個整數 N，(0 (記得用pointer 和 malloc （C語法），不然用普通陣列一定MLE (助教保證;P) )
接下來一行有N 個整數，分別表示第 A[i],(0

Output Format
一個整數，求一共有多少隱藏能力者。

Sample Input 1
6
1 3 2 5 6 3
Sample Output 1
2
Sample Input 2
3
2 2 2
Sample Output 2
0
Hint
請注意印出答案后要換行，一定要嚴格大於才算。
這題有需要用到double 還是float 嗎？
有沒有只用 int 就可以做到的方法？
平均是小數或是整數會影響結果嗎？
用C寫一定要用 malloc 哦！
C++ 請用 new 或是 stl 容器
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int N, count = 0, sum = 0;
    double avg = 0;
    cin >> N;
    int *people = new int[N];

    for(int i=0; i<N; i++){
        cin >> *(people + i);
        sum += *(people + i);
    }
    avg = (double)sum / N;

    for(int i=0; i<N; i++){
        if(people[i] > avg){
            count++;
        }
    }

    cout << count << endl;

    delete [] people;
    
    return 0;
}