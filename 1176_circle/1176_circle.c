/*
小明看到網路流傳一題小六數學題：「如下圖有兩個圓重疊，小圓半徑2公分，大圓半徑3公分，深灰色部分的面積和淺灰色部分的面積大約相差幾平方公分？」
小明非常的困擾，不知該怎麼算，請撰寫一程式讓使用者輸入小圓半徑與大圓半徑，讓程式幫使用者算出淺灰色部分的面積相差幾平方公分吧！
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592653589793

int main(void){
    int small_radius, big_radius;
    double small_area, big_area;
    double diff;

    scanf("%d", &small_radius);
    scanf("%d", &big_radius);

    big_area = pow(big_radius, 2) * PI;
    small_area = pow(small_radius, 2) * PI;

    diff = big_area - small_area;

    printf("%.2f\n", diff);

    return 0;
}