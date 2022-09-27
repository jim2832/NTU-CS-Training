/*
說明
設計一個Pokemon結構包含下列成員：

char Name[100]: 名字
int Lv: 等級
int Hp: 血量
使用Pokemon 結構宣告兩個結構實體並印出它們的資訊

Input Format
名字1
等級1
血量1
名字2
等級2
血量2

Output Format
Pokemon 1資訊(換行二次)
Pokemon 2資訊(換行二次)

Sample Input
Mewtwo
30
300
Pikachu
10
50
Sample Output
Name: Mewtwo
Lv: 30
HP: 300
 
Name: Pikachu
Lv: 10
HP: 50
 
Hint
※如果是Wrong Answer@8，請注意最後的換行
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Pokemon{
    char Name[100];
    int Lv;
    int Hp;
};

int main(void){
    struct Pokemon pokemon[2];
    
    //input
    for(int i=0; i<2; i++){
        scanf("%s", pokemon[i].Name);
        scanf("%d", &pokemon[i].Lv);
        scanf("%d", &pokemon[i].Hp);
    }

    //output
    for(int i=0; i<2; i++){
        printf("Name: %s\n", pokemon[i].Name);
        printf("Lv: %d\n", pokemon[i].Lv);
        printf("HP: %d\n", pokemon[i].Hp);
        printf("\n");
    }
    
    return 0;
}