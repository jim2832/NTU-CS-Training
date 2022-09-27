#include <stdio.h>
#include "pokemon.h"

void InputData(struct Pokemon *p){
    gets(p->Name);
    scanf("%d", &p->Lv);
    scanf("%d", &p->Hp);
}
void ShowInfo(struct Pokemon p){
    printf("Name: %s\n", p.Name);
    printf("Lv: %d\n", p.Lv);
    printf("HP: %d\n", p.Hp);
    printf("\n");
}