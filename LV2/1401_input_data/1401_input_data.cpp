/*
說明
請讓使用者依序輸入數字，直到輸入q停止。


列印出浮點數之乘積的和(所有浮點數相乘)。
列印出整數之乘積的和(所有整數相乘)。
比較上面兩者的大小，並列印出"Float > Int"或"Float = Int"或"Float < Int"

Input Format
int or float
...
...
q

Output Format
列印出浮點數之乘積的和(所有浮點數相乘) (取四捨五入到小數點第二位)
列印出整數之乘積的和(所有整數相乘)
"Float > Int"或"Float = Int"或"Float < Int"

Sample Input 1
1
0.64
2
4
12.5
q
Sample Output 1
8.00
8
Float = Int
Sample Input 2
2
3
4
3.2
4.2
q
Sample Output 2
13.44
24
Float < Int
Sample Input 3
1.2
3.74
1.22
3
4
9
10
0
q
Sample Output 3
5.48
0
Float > Int
Hint
1. 輸入只會有int或是float或是'q'三者之一，不會有其他文字出現。
2. 不會有1.0、2.0、3.0...(整數以符點數表示)的文字出現。
3. 浮點數輸出必須四捨五入到小數點第二位，可用round(數字,2)或是%.2f。
4. 注意列印文字的大小寫。
*/ 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <cstdlib>
#include <typeinfo>
#include <sstream>

int main(void){
    std::string input;
    int int_input, int_sum = 1;
    float float_input, float_sum = 1, temp;

    while(true){
        std::cin >> input;
        if(input == "q"){
            break;
        }
        temp = atof(input.c_str()); //string to float
        if(temp - int(temp) == 0){
            int_sum *= temp;
        }
        else{
            float_sum *= temp;
        }
    }

    if(float_sum == int_sum){
        printf("%.2f\n%d\n", float_sum, int_sum);
        std::cout << "Float = Int" << std::endl;
    }
    else if(float_sum < int_sum){
        printf("%.2f\n%d\n", float_sum, int_sum);
        std::cout << "Float < Int" << std::endl;
    }
    else{
        printf("%.2f\n%d\n", float_sum, int_sum);
        std::cout << "Float > Int" << std::endl;
    }

    return 0;
}