/*
說明
輸入一數字m
印出2到m之間的質數

Input Format
數字m(0<=m<=100)

Output Format
列出所有2~m之間所有的質數

Sample Input
100
Sample Output
2 is prime
3 is prime
5 is prime
7 is prime
11 is prime
13 is prime
17 is prime
19 is prime
23 is prime
29 is prime
31 is prime
37 is prime
41 is prime
43 is prime
47 is prime
53 is prime
59 is prime
61 is prime
67 is prime
71 is prime
73 is prime
79 is prime
83 is prime
89 is prime
97 is prime
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int m, count = 0;
    cin >> m;

    for(int i=2; i<=m; i++){
        count = 0;
        for(int j=1; j<=m; j++){
            if(i % j == 0){
                count++;
            }
        }
        if(count == 2){
            cout << i << " is prime" << endl;
        }
    }
    
    return 0;
}