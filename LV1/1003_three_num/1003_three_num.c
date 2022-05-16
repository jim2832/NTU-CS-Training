/*

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int comp[3];
    int num1, num2, num3;
    int sum, product, min = 100, max = 0;
    double avg;

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    sum = num1 + num2 + num3;
    avg = (double)sum / 3;
    product = num1 * num2 * num3;
    
    comp[0] = num1;
    comp[1] = num2;
    comp[2] = num3;
    for(int i=0; i<3; i++){
        if(min > comp[i]){
            min = comp[i];
        }
        if(max < comp[i]){
            max = comp[i];
        }
    }

    printf("sum is %d\n", sum);
    printf("average is %.2f\n", avg);
    printf("product is %d\n", product);
    printf("smallest is %d\n", min);
    printf("largest is %d\n", max);
    
    return 0;
}