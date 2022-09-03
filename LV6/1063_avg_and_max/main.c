#include "score.h"
#include <stdio.h>
#include <stdlib.h>

int main(void){

    //dynamic array
    int *score, n;
    scanf("%d", &n);
    score = (int*)malloc(sizeof(int) * n);

    //input
    inputAry(n, score);
    
    //output
    printf("avg = %.2lf\n", Avg(n, score));
    printf("highest:\n%d: %d", MaxScore(n, score) + 1, Max(n, score));

    free(score);

    return 0;
}