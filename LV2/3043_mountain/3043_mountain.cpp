/*
說明
某天住在A地的華華想去見住在B地的朋友。
但路途險峻，必須攀爬一座山才能夠到達。
現在華華拿到一張A地到B地的地型高度圖，代表每一個水平單位的高度。
如：
A 0 0 0 0 0 1 3 5 2 6 3 1 0 0 B
0代表地表平面，假設A地與B地都是在地表平面上。
而1 3 5代表這段路是上坡，5是山頂。
5 2這段路是下坡，而2是山谷。
2 6這段路是上坡，而6是山頂。
6 3 1 0 這段路是下坡，而0代表走到地表平面了。

若小華從A地出發，走水平道路每個單位需要花5分鐘。（A走到第一個0，需要5分鐘；第一個0走到第二個0也需要5分鐘）
小華爬山爬一個單位的高度需要10分鐘。（如：0至1需要10分鐘；1至3需要20分鐘）
而小華下山一個單位的高度需要6分鐘。（如：5至2需要18分鐘）
*注意：從一開始的A地到第一個0 & 最後一個0到B地 都需要5分鐘。



Input Format
頭尾有A與B，且中間有一行 N 個整數（由空格隔開）

Output Format
所需要多少時間（單位：分鐘）

Sample Input 1
A 0 0 0 0 0 1 3 5 2 6 3 1 0 0 B
Sample Output 1
179
Sample Input 2
A 0 0 1 5 9 10 13 20 20 20 19 18 15 20 21 22 19 18 20 21 24 20 16 14 12 10 9 5 0 0 B
Sample Output 2
558
Hint
A地與B地的高度都是0。
C語言做這題時，易卡在如何得知輸入結束，可用scanf的回傳值的特性或字串處理等方式。
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    int A = 0, B = 0, i = 0, final_index, time = 0;
    int mountain[100];
    string input;

    //init
    for(int i=0; i<100; i++){
        mountain[i] = 0;
    }

    //input
    while(true){
        cin >> input;
        if(input == "A"){
            mountain[i] = 0;
            i++;
            continue;
        }
        else if(input == "B"){
            final_index = i;
            mountain[i] = 0;
            break;
        }
        else{
            mountain[i] = atoi(input.c_str());
            i++;
        }
    }
    
    //result
    for(int i=0; i<final_index; i++){
        if(mountain[i+1] - mountain[i] > 0){
            time += 10 * (mountain[i+1] - mountain[i]);
        }
        else if(mountain[i+1] - mountain[i] < 0){
            time += 6 * abs((mountain[i+1] - mountain[i]));
        }
        else{
            time += 5;
        }
    }

    cout << time;
    
    return 0;
}