/*
說明
設計一個Pokemon結構包含下列成員：

char Name[100]: 名字
int Lv: 等級
int Hp: 血量
使用Pokemon 結構宣告一"動態"結構陣列
輸入一數字n代表要輸入的Pokemon資料筆數後
並輸入n筆Pokemon料後
可輸入一數字m代表排序的依據
0代表不排序，依原輸入順序列印出來
1代表依Name排序後列印出來
2代表依Lv排序後列印出來
3代表依Hp排序後列印出來

Input Format
整數n(資料筆數)
名字1
等級1
血量1
名字2
等級2
血量2
...
名字n
等級n
血量n
整數m(排序的依據 )

Output Format
(排序後的 Pokemon 資訊)
名字1
等級1
血量1(換行2次)

名字2
等級2
血量2(換行2次)

...
名字n
等級n
血量n(換行2次)


Sample Input 1
3
Mewtwo
30
300
Pikachu
10
50
HelloKitty
50
500
0
Sample Output 1
Name: Mewtwo
Lv: 30
HP: 300
 
Name: Pikachu
Lv: 10
HP: 50
 
Name: HelloKitty
Lv: 50
HP: 500
Sample Input 2
3
Mewtwo
30
600
Pikachu
10
50
HelloKitty
50
500
2
Sample Output 2
Name: Pikachu
Lv: 10
HP: 50
 
Name: Mewtwo
Lv: 30
HP: 600
 
Name: HelloKitty
Lv: 50
HP: 500
*/

#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cstdlib>
#include <algorithm>
using namespace std;

struct Pokemon{
    char Name[100];
    int Lv;
    int Hp;
};

int stringCompare(Pokemon p1, Pokemon p2){
    return strcmp(p1.Name, p2.Name);
}

bool LvCompare(Pokemon p1, Pokemon p2){
    return p1.Lv > p2.Lv;
}

int HpCompare(Pokemon p1, Pokemon p2){
    return p1.Hp > p2.Hp;
}

int main(void){
    int n, m;
    cin >> n; //input number

    struct Pokemon pokemon[n], temp;

    //input
    for(int i=0; i<n; i++){
        scanf("%s", pokemon[i].Name);
        scanf("%d", &pokemon[i].Lv);
        scanf("%d", &pokemon[i].Hp);
    }

    cin >> m; //order method

    //multiple choices
    switch(m){
        case 0:
            for(int i=0; i<n; i++){
                printf("Name: %s\nLv: %d\nHP: %d\n\n", pokemon[i].Name, pokemon[i].Lv, pokemon[i].Hp);
            }
            break;

        case 1:
            qsort(pokemon, n, sizeof(struct Pokemon), stringCompare);
            for(int i=0; i<n; i++){
                printf("Name: %s\nLv: %d\nHP: %d\n\n", pokemon[i].Name, pokemon[i].Lv, pokemon[i].Hp);
            }
            break;

        case 2:
            qsort(pokemon, n, sizeof(struct Pokemon), LvCompare);
            for(int i=0; i<n; i++){
                printf("Name: %s\nLv: %d\nHP: %d\n\n", pokemon[i].Name, pokemon[i].Lv, pokemon[i].Hp);
            }
            break;

        case 3:
            qsort(pokemon, n, sizeof(struct Pokemon), HpCompare);
            for(int i=0; i<n; i++){
                printf("Name: %s\nLv: %d\nHP: %d\n\n", pokemon[i].Name, pokemon[i].Lv, pokemon[i].Hp);
            }
            break;
        
        default:
            break;
    }
    
    return 0;
}