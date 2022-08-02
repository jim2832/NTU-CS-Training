/*
說明
請撰寫一程式，令使用者輸入一數字T代表希望比對的數字，接著輸入一數字N代表接下來要輸入N個數字。
請讓你寫的程式可以判斷T是否曾在這N次輸入中出現過，有的話輸出Found@第幾次輸入的，可能會有多個。
都沒有的話最後請輸出T is ot found.。

Input Format
第一行為要找的整數T
第二行為接下來要輸入幾個整數N
第三行為N個整數，中間以空白間隔

Output Format
有找到相符合的話輸出Found@第幾次輸入的(從1起算)，可能會有多個。
都沒有的話最後請輸出T is ot found.。

Sample Input 1
33
5
11 22 33 44 55
Sample Output 1
Found@3
Sample Input 2
99
5
11 22 33 44 55
Sample Output 2
99 is ot found.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int target, N, input, index;
    bool found = false;

    cin >> target;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> input;
        if(input == target){
            index = i;
            found = true;
            cout << "Found@" << index + 1 << endl;
        }
    }

    if(found != true){
        cout << target << " is ot found." << endl;
    }
    
    return 0;
}