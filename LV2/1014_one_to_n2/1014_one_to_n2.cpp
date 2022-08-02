/*
說明
請撰寫一程式，可以令使用者輸入一大於0的整數n
算出1加到n的結果

Input Format
數字n (1<=n<=10)

Output Format
1+2+3+…+n = 結果

Sample Input
5
Sample Output
1+2+3+4+5 = 15
Hint
想印出過程中的1~n該怎麼做呢？
想在中間的數字加上「+」號該怎麼做呢？
注意輸出格式，在「 = 」的左右兩邊各有一空白
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, sum = 0;
    cin >> n;

    for(int i=1; i<=n; i++){
        sum += i;
        if(i == n){
            cout << i << " ";
        }
        else{
            cout << i << "+";
        }
    }
    cout << "= " << sum << endl;
    
    return 0;
}