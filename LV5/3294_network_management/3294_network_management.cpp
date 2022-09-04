/*
說明
金寶三是一名芭樂高中的網路管理員，負責管理全校的網路使用安全
在一個風和日麗的下午，大東哥來找金寶三查詢最近的可疑網路使用者
請幫忙寶三在落落長的網路使用者清單中找尋相對應使用的網路卡編號(MAC address)

Input Format
連線使用者數量 n
mac address 0
mac address 1
mac address 2
......
mac address n
0 1 2 3......(空白間隔)
(欲查詢的mac address位置)
Output Format
mac address
mac address
......
mac address
mac address
Sample Input 1
7
96:ad:4b:e4:0d:a8
9b:29:43:21:ff:9e
a6:8a:e7:54:ab:93
44:e8:1f:83:49:4a
3b:43:fc:ae:a3:58
e4:19:98:79:b1:38
50:8f:3b:d8:c8:54
0 1 2
Sample Output 1
96:ad:4b:e4:0d:a8
9b:29:43:21:ff:9e
a6:8a:e7:54:ab:93
Hint
本題請使用 "二維" 動態陣列來解題
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int n, k = 0;
    cin >> n;
    string temp;
    string *mac = new string[n];
    int *search = new int[n];

    for(int i=0; i<n; i++){
        cin >> mac[i];
    }

    while(1){
        cin >> temp;
        if(temp == "\n"){
            break;
        }
        int num = atoi(temp.c_str());
        search[k] = num;
        k++;
    }

    delete [] mac;
    
    return 0;
}