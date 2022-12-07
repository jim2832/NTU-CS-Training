/*
說明
小明現在已經是個事業有所小成的人。
小明非常明白自己不可以只是把事業專注在一個領域裏，所以他決定投資另一個新企業。
效仿steve jobs, 小明的企業也是從車庫開始的。小明打算進行車子買賣。
當然在這個全部東西的系統化的時代，小明就聘請了你幫他寫一個記錄他車庫資料的程序。

以下圖表是汽車的買賣價格。
小明的車庫一共有6中款式的汽車。請自己在程式裏自己寫好他們的資料。

                買入(元)         賣出(元)
BMW             8000            20000
Volkswagen      7000            18000
Ferrari         12000           35000
Proton          4000            50000
Audi            10000           30000
Lamborghini     15000           40000
範例：

typedef struct data{
    char type[16];
    int buy;
    int sell;
}Data;
 
Data carlist[6];
私有成員:
屬性:
char Garage[10][16];
int car;
int sellprice;
int totalcost;
int earn;
車庫（假設車庫最多只能容納10輛車）,目前的車輛,剩下的車的售價總額,總成本,總獲利
公開成員:
方法: Start_a_business() 建構式 (將car初始化為0,sellprice為0,totalcost為0,earn為0,將garage清空)
方法: void store(char x[16])

存入一台車 (將x存入Garage中)totalcost 增加為輸入車的cost
存完后輸出"Store in a car.\nType: (type)\nnumber car in garage: (car)\n"
若如果車庫滿了請輸出 "Garage FULL!\nCar not stored!\n"
方法: void sell(char x[16])

賣出一台車(將Garage消除一輛車)(提醒: 需判斷目前garage是否有同樣的車)
若有輸出"You sell a car.\nType: (type)\nSell price: (賣出的錢)\nnumber car left in garage: (car)\n"

若無輸出"Car not found!\n"
方法: void displayi()

顯示目前倉庫的預估售價(就是所有剩下的車的售價總額) (將sellprice輸出于熒幕) 主程式
印出 "Sell price= (sellprice)\n"
方法: void displaycost()

顯示目前買車入倉庫的總成本(將totalcost 印出來)
印出 "Total cost= (totalcost)\n"
方法: void displayp()

顯示目前倉庫的總獲利(將earn 印出來)
印出 "Profit= (earn)\n"
製作一選單
輸入
a 買入一台車(輸入后輸出 如 BMW)
s 賣出一台車(輸出車種類和獲利多少)
c 總成本(印出目前存入庫存的車所花成本)
i 目前庫存的預估售價
p 目前一共賺了多少錢。（買入會減，賣出會加）
q 離開程式 輸出"Thank you for visiting XMing_Garage. Bye bye.\n"

sellprice 等於剩下的車的賣出的總和

Input Format
Output Format
Sample Input 1
a BMW
s Audi
a Volkswagen
a Proton
c
i
s Lamborghini
a Ferrari
p
q
Sample Output 1
Store in a car.
Type: BMW
number car in garage: 1
Car not found!
Store in a car.
Type: Volkswagen
number car in garage: 2
Store in a car.
Type: Proton
number car in garage: 3
Total cost= 19000
Sell price= 88000
Car not found!
Store in a car.
Type: Ferrari
number car in garage: 4
Profit= -31000
Thank you for visiting XMing_Garage. Bye bye.
Sample Input 2
a Volkswagen
s Volkswagen
a Proton
a BMW
s Ferrari
a Ferrari
a Ferrari
a Audi
a BMW
a Volkswagen
a Proton
i
c
p
a Ferrari
a Audi
a BMW
a Volkswagen
s Ferrari
s Volkswagen
s BMW
c
i
p
q
Sample Output 2
Store in a car.
Type: Volkswagen
number car in garage: 1
You sell a car.
Type: Volkswagen
Sell price: 18000
number car left in garage: 0
Store in a car.
Type: Proton
number car in garage: 1
Store in a car.
Type: BMW
number car in garage: 2
Car not found!
Store in a car.
Type: Ferrari
number car in garage: 3
Store in a car.
Type: Ferrari
number car in garage: 4
Store in a car.
Type: Audi
number car in garage: 5
Store in a car.
Type: BMW
number car in garage: 6
Store in a car.
Type: Volkswagen
number car in garage: 7
Store in a car.
Type: Proton
number car in garage: 8
Sell price= 258000
Total cost= 72000
Profit= -54000
Store in a car.
Type: Ferrari
number car in garage: 9
Store in a car.
Type: Audi
number car in garage: 10
Garage FULL!
Car not stored!
Garage FULL!
Car not stored!
You sell a car.
Type: Ferrari
Sell price: 35000
number car left in garage: 9
You sell a car.
Type: Volkswagen
Sell price: 18000
number car left in garage: 8
You sell a car.
Type: BMW
Sell price: 20000
number car left in garage: 7
Total cost= 94000
Sell price= 250000
Profit= -3000
Thank you for visiting XMing_Garage. Bye bye.
Hint
請注意空格和空行。
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

typedef struct data{
    char type[16];
    int buy;
    int sell;
}Data;

class car{
    public:
        //constructor
        void Start_a_business(){
            car = 0;
            sellprice = 0;
            totalcost = 0;
            earn = 0;
            for(int i=0; i<10; i++){
                for(int j=0; j<16; j++){
                    Garage[i][j] = 0;
                }
            }
        }

        //存入車子
        void store(char x[16]){
            if(car == 10){
                cout << "Garage FULL!\nCar not stored!\n";
                return;
            }
            
        }

    private:
        char Garage[10][16];
        int car;
        int sellprice;
        int totalcost;
        int earn;
};

int main(void){
    Data carlist[6];
    carlist[0] = {"BMW", 8000, 20000};
    carlist[1] = {"Volkswagen", 7000, 18000};
    carlist[2] = {"Ferrari", 12000, 35000};
    carlist[3] = {"Proton", 4000, 50000};
    carlist[4] = {"10000", 10000, 30000};
    carlist[5] = {"Lamborghini", 15000, 40000};
    
    return 0;
}