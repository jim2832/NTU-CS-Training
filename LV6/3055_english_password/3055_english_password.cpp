/*
說明
今天有一個加密的方法，為abc轉換為字母的排列順序。
如：
a --> 1
b --> 2
c --> 3
...
...
...
y --> 25
z --> 26
而如果同樣的單字連續出現的話，會變成：
aa --> 27
bb --> 28
cc --> 29
...
...
...
yy --> 51
zz --> 52

aaa --> 53
bbb --> 54
ccc --> 55
...
...
...
yyy --> 77
zzz --> 78


如今您會拿到一串數字，中間會用"-"隔開，請您試著把數字解成英文字。
如：1-42-12-5就會得到apple。


解題思略：
可用 被除數 = 除數商數 + 餘數，的概念來解。
餘數為索引ABC的位置
商數 = 0 為一個英文字母
商數 = 1 為二個英文字母
商數 = 2 為三個英文字母，以此類推。

如42 = 261 + 16
餘數 = 16 (第16個英文字母)
商數 = 1 (列印2次)
那就等於"pp"。

但要特別處理的是，如果數字是52
52 = 262 + 0
餘數 = 0
商數 = 2
此時應該要看為 餘數(索引位置)= 26；商數 = 1
才會列印出"zz"這個字。
("z"的處理占此題的20分，若不會處理，可以先提交程式拿部分分數)


Input Format
int-int-int-int-int... (整數中間以空格隔開)

Output Format
英文字母組成的單字 (有可能現實中有這單字也有可能沒這單字)

Sample Input 1
1-42-12-5
Sample Output 1
apple
Sample Input 2
3-5-9-2-1
Sample Output 2
ceiba
Sample Input 3
83-52-41
Sample Output 3
eeeezzoo
Hint
1. "abcdefghijklmnopqrstuvwxyz"這串可以直接複製貼上。
2. 批改系統可能沒有助教上課教的string這模組，所以請自己打"abc....."。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    
    
    return 0;
}