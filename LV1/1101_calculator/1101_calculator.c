#include <stdio.h>
#include <stdlib.h>

int main(){
    double num1, num2, ans1, ans2, ans3, ans4;
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    ans1 = num1 + num2;
    ans2 = num1 - num2;
    ans3 = num1 * num2;
    ans4 = num1 / num2;
    
    printf("%.2f + %.2f = %.2f\n", num1, num2, ans1);
    printf("%.2f - %.2f = %.2f\n", num1, num2, ans2);
    printf("%.2f * %.2f = %.2f\n", num1, num2, ans3);
    printf("%.2f / %.2f = %.2f\n", num1, num2, ans4);

    return 0;
}