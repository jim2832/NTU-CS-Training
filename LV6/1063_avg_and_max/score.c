#include <stdio.h>
#include <stdlib.h>
#include "score.h"

void inputAry(int n, int *P){
    for(int i=0; i<n; i++){
        scanf("%d", &P[i]);
    }
}

void printArr(int n, int* P){
    for(int i=0; i<n; i++){
        printf("%d ", P[i]);
    }
    printf("\n");
}

double Avg(int n, int* P){
    int sum = 0;
    double avg;

    for(int i=0; i<n; i++){
        sum += P[i];
    }
    avg = (double)sum / n;

    return avg;
}

int Max(int n, int *P){
    int max = 0;
    for(int i=0; i<n; i++){
        if(max < P[i]){
            max = P[i];
        }
    }

    return max;
}

int MaxScore(int n, int* P){
    int max = 0;
    int max_index;
    for(int i=0; i<n; i++){
        if(max < P[i]){
            max = P[i];
            max_index = i;
        }
    }

    return max_index;
}