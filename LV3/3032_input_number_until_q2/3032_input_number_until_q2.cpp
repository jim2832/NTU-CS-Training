/*
說明
輸入數字(int或float)，儲存進一個List容器裡面，直到輸入q後程式結束。
但使用者總是暴力的，所以若使用者輸入的不是數字，則提醒使用者"Please Enter Numbers Only"
最後列印出使用者輸入的數字
1.List容器(未排序過)
2.List容器(由數字小到大排序)
3.List容器(由數字大到小排序)
4.List容器(未排序過)

Input Format
數字1(int 或 float)
數字2(int 或 float)
...
q

Output Format
List容器(未排序過)
List容器(由數字小到大排序)
List容器(由數字大到小排序)
List容器(未排序過)

Sample Input 1
1
2
3
-3
-2
q
Sample Output 1
[1, 2, 3, -3, -2]
[-3, -2, 1, 2, 3]
[3, 2, 1, -2, -3]
[1, 2, 3, -3, -2]
Sample Input 2
8
5
python (這邊要提醒使用者"Please Enter Numbers Only")
-3
q
Sample Output 2
Please Enter Numbers Only
[8, 5, -3]
[-3, 5, 8]
[8, 5, -3]
[8, 5, -3]
Hint
1.注意Please Enter Numbers Only的大小寫。
*/

void bubble_sort(int *arr){
    for(int i=4; i>0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
using namespace std;

int main(void){
    string input;
    double arr[100];
    int len;

    while(true){
        cin >> input;
        if(input == "q"){
            break;
        }
        

    }
    
    return 0;
}