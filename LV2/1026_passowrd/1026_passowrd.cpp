/*
說明
阿明覺得自己的電腦放在學校，常常會被朋友亂發文，於是想寫個密碼驗證的程式來保護自己的隱私。

他不想把自己的密碼設定的太複雜，以免自己忘記登不進去，所以密碼僅包含數字。

他也不想向提款機一樣，輸入密碼錯誤超過3次就鎖卡，所以他希望程式可以無限次的嘗試密碼，一直到輸入正確為止。

你可以幫他設計這個程式，讓他的朋友不能再盜他的電腦發文嗎?


Input Format
一開始輸入一個整數，僅包含數字，0 < 數字 < 2000000000，作為預設的密碼。
若不在範圍內則輸出 Wrong Password Setting!並結束程式
若預設密碼符合規範，接下來每一行的輸入為使用者嘗試的密碼，0 < 嘗試的密碼長度 < 100，僅包含數字。
Output Format
若輸入的密碼錯誤，則輸出Wrong Password!。

若輸入的密碼正確，則輸出Correct!，並且終止程式。

Sample Input 1
12345
45676
3427
9
12345
Sample Output 1
Wrong Password!
Wrong Password!
Wrong Password!
Correct!
Sample Input 2
555
111
222
555
333
444
555
Sample Output 2
Wrong Password!
Wrong Password!
Correct!
Hint
請注意輸入密碼正確後，程式就會終止，在那之後的輸入並不會有對應的輸出。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(void){
    long int password, input, i;
    bool correct_state = false;
    cin >> password;
    
    if(password > 0 && password < 2000000000){
        while(i < 100){
            cin >> input;
            i++;
            if(correct_state != true){
                if(input != password){
                    cout << "Wrong Password!" << endl;
                }
                else{
                    cout << "Correct!" << endl;
                    correct_state = true;
                }
            }
        }
    }
    else{
        cout << "Wrong Password Setting!" << endl;
        return 0;
    }
    
    return 0;
}