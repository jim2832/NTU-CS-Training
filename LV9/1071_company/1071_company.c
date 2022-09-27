/*
說明
請寫一程式可以連續儲存3名公司職員的姓名、電話與職員編號，並可依職員編號查尋。 若找不到則輸出not found

struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};
Input Format
姓名1
電話1
編號1
...
姓名3
電話3
編號3
查尋編號：

Output Format
姓名n
電話n
編號n
或
not found

Sample Input
John
0987456321
77
May
0937554412
88
Jeff
0912654785
99
88
Sample Output
found
Name: May
Phone: 0937554412
Id: 88
Hint
最後要輸出 not found 可以使用「旗標」這個概念來完成
令一變數初值為1，令found改變此變數為0，若此變數在程式結束前仍為1則not found
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 3

struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};

int main(void){
    struct Employee person[N];
    int qid;

    for(int i=0; i<N; i++){
        scanf("%s", person[i].Name);
        scanf("%s", person[i].Phone);
        scanf("%d", &person[i].id);
    }

    scanf("%d", &qid);
    int flag = 0; //用flag記錄有沒有找到

    for(int i=0; i<N; i++){
        if(qid == person[i].id){
            flag = 1;
            printf("found\n");
            printf("Name: %s\n", person[i].Name);
            printf("Phone: %s\n", person[i].Phone);
            printf("Id: %d\n", person[i].id);
        }
    }

    if(flag == 0){
        printf("not found");
    }
    
    return 0;
}