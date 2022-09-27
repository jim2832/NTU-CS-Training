/*
說明
設計一個Pokemon結構包含下列成員：

char Name[100]: 名字
int Lv: 等級
int Hp: 血量
使用Pokemon 結構宣告一結構陣列 並輸入3筆Pokemon料後印出等級最高的Pokemon

Input Format
名字1
等級1
血量1
名字2
等級2
血量2
名字3
等級3
血量3

Output Format
等級最高的 Pokemon 1資訊(換行一次)
....

Sample Input
Mewtwo
30
300
Pikachu
10
50
HelloKitty
50
500
Sample Output
Name: HelloKitty
Lv: 50
HP: 500
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

struct Pokemon{
    char Name[100];
    int Lv;
    int Hp;
};

int main(void){
    struct Pokemon pokemon[N];
    int max_Lv = 0;
    int max_index;
    
    //input
    for(int i=0; i<N; i++){
        scanf("%s", pokemon[i].Name);
        scanf("%d", &pokemon[i].Lv);
        scanf("%d", &pokemon[i].Hp);
    }

    //judge
    for(int i=0; i<N; i++){
        if(max_Lv < pokemon[i].Lv){
            max_Lv = pokemon[i].Lv;
            max_index = i;
        }
    }

    printf("Name: %s\n", pokemon[max_index].Name);
    printf("Lv: %d\n", pokemon[max_index].Lv);
    printf("HP: %d\n", pokemon[max_index].Hp);
    
    return 0;
}