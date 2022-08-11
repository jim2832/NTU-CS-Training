/*
說明
冰雪奇緣(Frozen)的ELSA可以瞬間造出樓梯來。
而身為程式設計師的我們，也可以一個指令建出一座樓梯來。
(雖然是虛擬的)

現在請輸入一個整數n(int)，製造出一座層數為n且向右爬升的樓梯吧！

樓梯的地板為"_"，並且每層兩個。
樓梯的支架為"|"。


Input Format
int

Output Format
      __
    __||
  __||||
__||||||
||||||||
...
...
(見Sample Input)

Sample Input 1
4
Sample Output 1
      __
    __||
  __||||
__||||||
||||||||
Sample Input 2
9
Sample Output 2
                __
              __||
            __||||
          __||||||
        __||||||||
      __||||||||||
    __||||||||||||
  __||||||||||||||
__||||||||||||||||
||||||||||||||||||
Sample Input 3
1
Sample Output 3
__
||

*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; i<=n-j; j++){
            cout << "  ";
        }
        cout << "__";
        for(int j=1; j<=i-1; j++){
            cout << "||";
        }
        cout << endl;
    }

    for(int i=1; i<=n; i++){
        cout << "||";
    }
    
    return 0;
}