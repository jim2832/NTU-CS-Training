/*
說明
令使用者在同一行輸入一串用逗後隔開的英文單字。

並求出 "各個單字的倒序拼音"。


Input Format
單字,單字,單字...

Output Format
單字倒序,單字倒序,單字倒序...

Sample Input 1
apple,egg
Sample Output 1
elppa,gge
Sample Input 2
hey
Sample Output 2
yeh
Sample Input 3
hannah,deified
Sample Output 3
hannah,deified
Hint
Python可嘗試 list(range(5,-1,-1)) = [5,4,3,2,1,0]或 [::-1]
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    char container[7][100];

    scanf("%s,%s,%s,%s,%s,%s,%s", container[0], container[1], container[2], container[3], container[4], container[5], container[7]);

    for(int i=0; i<7; i++){
        for(int j=0; j<100; j++){
            cout << container[i][j] << endl;
        }
    }
    
    return 0;
}