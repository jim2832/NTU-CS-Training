/*
說明
要求:
設計一類別eCash模擬儲值卡的行為
私有成員:

屬性: Money 目前可用金額
公開成員:

方法: eCash() 建構式 (將Money初始化為0元)
方法: void store(int m) 儲值 (將m存入Money中)
方法: void pay(int m) 消費 (將Money消費m元)(提醒: 需判斷目前eCash是否有足夠的金額消費)
方法: void display() 顯示目前餘額 (將Money輸出於螢幕) 主程式
輸入’s’: 儲值
輸入’p’: 消費
輸入’d’:查詢餘額
輸入’q’: 離開程式
範例：http://homepage.ntu.edu.tw/~jfanc/C/Demo/eCash.exe
(本系統中，不用輸出選單，格式請依題目說明)

Input Format
第一行為選單選項 s、p、d、q之一
第二行為上一行選項選擇之後輸入的相對應數值

輸入’s’: 儲值，第二行請輸入要儲值的金額
輸入’p’: 消費，第二行請輸入要消費的金額
輸入’d’:查詢餘額，無第二行輸入，直接列出餘額
輸入’q’: 離開程式，要第二行輸入，直接結束程式
重複以上操作直到輸入選項q離開程式為止，測資輸入最後必定會輸入q結束。

Output Format
請參見Sample Output

Sample Input
s
-100
s
300
p
400
p
-50
p
50
d
q
Sample Output
1
2
3
4
5
6
7
eCash: Please enter a number > 0.
eCash: You stored 300.
eCash: Insufficient balance.
eCash: Please enter a number > 0.
eCash: You spend 50.
eCash: You remaining 250.
eCash: Thank you. Bye Bye.
*/

#include <iostream>
#include <string>
using namespace std;

class eCash{
    public:
        //constructor
        eCash(){
            money = 0;
        }

        void store(int m){
            money += m;
        }

        void pay(int m){
            money -= m;
        }

        void display(){
            cout << "eCash: You remaining " << money << "." << endl;
        }

        int GetMoney(){
            return money;
        }

    private:
        int money;
};

int main(void){
    char input;
    int m;
    eCash wallet; //make object

    while(1){
        cin >> input;

        switch (input){

        //case s
        case 's':
            cin >> m;
            if(m < 0){
                cout << "eCash: Please enter a number > 0." << endl;
                m = 0;
                break;
            }
            wallet.store(m);
            cout << "eCash: You stored " << m << "." << endl;
            break;

        //case p
        case 'p':
            cin >> m;
            if(m < 0){
                cout << "eCash: Please enter a number > 0." << endl;
                m = 0;
                break;
            }
            if(wallet.GetMoney() -m < 0){
                cout << "eCash: Insufficient balance." << endl;
                break;
            }
            wallet.pay(m);
            cout << "eCash: You spend " << m << "." << endl;
            break;

        //case d
        case 'd':
            wallet.display();
            break;

        //case q
        case 'q':
            cout << "eCash: Thank you. Bye Bye." << endl;
            return 0;
            break;
        
        default:
            break;
        }
    }

    return 0;
}