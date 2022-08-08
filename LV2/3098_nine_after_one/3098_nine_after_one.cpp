/*
說明
連續輸入一串數字，數字的範圍在0-9之間，
請判斷這連續數字當中，有幾個9是緊接在1後面的。

例如：
1
9
這個9就算是緊接在1後面。
而：
1
3
9
這個9中間被3隔斷了，不算是緊接在1後面。



Input Format
int (0-9之間)
...
...
...
q

Output Format
int (有幾個9是接在1後面)

Sample Input 1
1
9
0
9
3
q
Sample Output 1
1
Sample Input 2
1
1
3
4
2
1
q
Sample Output 2
0
Sample Input 3
1
9
1
0
9
1
1
3
1
1
4
9
1
9
q
Sample Output 3
2
Sample Input 4
1
9
1
9
1
1
9
9
9
1
9
1
9
9
1
9
q
Sample Output 4
6
Hint
C語言做這題時，易卡在如何得知輸入結束，可用scanf的回傳值的特性或字串處理等方式
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int count = 0, input[200];
    int i = 0;
    string s;

    for(int i=0; i<200; i++){
        input[i] = 0;
    }

    while(true){
        cin >> s;
        if(s == "q"){
            break;
        }
        input[i] = atoi(s.c_str());
        i++;
    }

    for(int i=0; i<199; i++){
        if(input[i] == 1 && input[i+1] == 9){
            count++;
        }
    }

    cout << count;
    
    return 0;
}