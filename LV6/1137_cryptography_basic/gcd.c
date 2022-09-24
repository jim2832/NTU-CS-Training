#include "gcd.h"

int gcd(int a, int b){
    int GCD;

    while(a != 0 && b != 0){
        if(a >= b){
            a %= b;
        }
        else{
            b %= a;
        }

        if(a >= b){
            GCD = a;
        }
        else{
            GCD = b;
        }
    }

    return GCD;
}