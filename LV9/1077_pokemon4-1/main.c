#include <stdio.h>
#include "pokemon.h"
 
int main()
{
    struct Pokemon p1,p2;
 
    InputData(&p1);
    InputData(&p2);
 
    ShowInfo(p1);
    ShowInfo(p2);
 
    return 0;
}