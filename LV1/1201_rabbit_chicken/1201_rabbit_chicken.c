/*
主題
基本運算

說明
王老先生有塊地（yi~ya~yi~ya~oh~）
王老先生在他那塊土地上養了許多的動物。
有一天王老先生一醒來發現雞和兔子的籠子之間破了一個洞。
導致雞和兔子的籠子相通了，所以他們互相亂串。
這下可麻煩了，王老先生算不到他們的數量，所以他要求你來幫他的忙。
由於王老先生視力衰退，所以衹能夠算到這兩個籠子裏一共有多少個頭和多少只脚。
所以要你來判斷裏面一共有多少只雞和兔子。
已知王老先生養的每一只動物都是健康的，所以每隻雞都有2只脚，每隻兔子都有4只脚。
由於王老先生視力衰退，所以有時候也會有看錯的情況，如果看錯了就輸出 "NO" ,反之"YES" (都是大寫)

舉例：
現在王老先生看到5個頭，14只脚，
所以雞就有3只，兔子有2只。
如果王老先生看到的數量無解，就輸出 "NO"

Input Format
輸入兩個整數 N，M代表頭的數量和脚的數量, 1

Output Format
如果有解就輸出 "YES\n"
然後輸出兩個整數代表雞和兔子的數量。
記得兩個數字之間有空格，輸出兔子數量后沒有空格直接換行。
反之就只輸出 "NO\n" 然後結束。
Sample Input 1
4 10
Sample Output 1
YES
3 1
Sample Input 2
5 13
Sample Output 2
NO
Sample Input 3
8 30
Sample Output 3
YES
1 7
Hint
請注意大小寫。
請注意印出答案后要空行。
使用c/c++解此題須注意

本題若是使用c語言，且使用公式解者，注意計算過程中，是否超過整數上限。(測資7與9會爆掉)
使用Python解此題須注意

print()本身就帶有換行
本題只有一行輸入，所以只可以有一個input()
input()為字串型態，並以一行為單位，可用split做切割後，再轉數字型態。
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int N, M; //N代表頭，M代表腳
    int X, Y; //令雞有X隻，兔子有Y隻
    int flag = 0; //判斷是否有找到
    scanf("%d %d", &N, &M);

    X = (4 * N - M) / 2;//算出雞的數量
    Y = N - X;//算出兔的數量

    if (X <= 0 || Y <= 0) {
    //結果小於等於0，答案不成立，無解
        printf("No\n");
    } else {
    //結果大於0
        printf("YES\n");
        printf("%d %d", X, Y);
    }

  return 0;
}

//cd /Users/mac/Desktop/NTU_CS_Training/LV1/1201_rabbit_chicken