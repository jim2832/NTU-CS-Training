/*
說明
請撰寫一程式，令使用者可以輸入一人之 姓名、年齡與性別，並將其列印在螢幕上。

Input Format
姓名
年齡
性別

Output Format
字串
數字
字串

Sample Input
史帝夫工作
65
男
Sample Output
Name:史帝夫工作
Age:65
Gender:男
Hint
本題 C/C++ 須注意輸入的文字內容並非一個字，而是許多字，不可一次性的用單一字元輸入，可以連續輸入字元，或是可用字串(字元陣列)處理。ex：char str[128]及%s進行格式化輸入及輸出
另外※特別注意！ 在:之後無空白

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    char name[10];
    char age[10];
    char gender[10];

    scanf("%s", name);
    scanf("%s", age);
    scanf("%s", gender);

    printf("Name:%s\n",name);
    printf("Age:%s\n",age);
    printf("Gender:%s\n",gender);

    return 0;
}