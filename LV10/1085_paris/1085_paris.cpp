/*
說明
在川普宣佈退出巴黎和約后，Tom&Jerry 意識到環境污染的嚴重性。
當頭棒喝， Tom&Jerry 也意識到如今許多動物的數量正在急速下滑中。
爲了做出改變， Tom&Jerry 賣掉了他們的公司全心全意投入保育動物的工作。
觀察了一些資料后以下這是他們總結出來的結論。

一種野生動物的族群量如果已經減少到以前最多(或自然)時的十分之一不到，
且族群數量少於1萬隻，且受保護之後，自然恢復緩慢者，
均應列為保育類動物加以保護，限制或禁止捕捉與買賣。
族群量如果少於1000隻，就瀕臨絕種了！
最後，如果一個地區的族群少於25隻時，
因近親交配，在演化學理上就註定要絕種了！台灣雲豹就是一例。

因爲負責保育工作的人太少了，統計動物的人手不足，於是擅長 coding 的 Tom&Jerry 打算負責整理動物的資料。
他們打算寫一個 class 來完成這個工作。
他們的class 會有3個動作,a,u,d
C++範例： 僅供參考
typedef struct data{
    char scientific_name[256];
    int number;
}Data;
Python範例： 僅供參考
class Data:
    def __init__(self):
        scientific_name = ''
        number = 0
私有成員：
Data Animal_list[500];//可以假設動物的種類不會超過500種。
int type;// 目前Animal_list 裏面的動物數量。
int Endanger_number; // 目前瀕臨絕種的動物種類的數量。
//當然你也可以加自己的東西在上面。
公開成員:
方法: Animal() 建構式 (將Animal_list初始化，全部裏面的資料清空，type=0;)
方法: void add(Data x) 加入一個動物的資料 (將x存入Animal_list中)
存完后輸出"Add. Animal:(scientific_name).\nNumber: (number)\nEndanger species: (Yes/No)\n";
//(如果數量低於1000皆爲瀕臨絕種的動物。1000不算。若是瀕臨絕種的動物就是 Yes,反之是 NO.)
方法: void update(Data x) 更新一個動物的資料 (在Animal_list中找 x.scientific_name 然後更新它的值)
存完后輸出"Update. Animal:(scientific_name).\nNumber: (number更新后的)\nEndanger species: (Yes/No)\n";
//(如果數量低於1000皆爲瀕臨絕種的動物。1000不算。若是瀕臨絕種的動物就是 Yes,反之是 NO.)
方法: void display() 顯示目前Animal_list 裏面瀕臨絕種的動物(所有低於1000數量的動物才算。1000不包括) 。
印出 "There are (Endanger_number) animals who are endanger species\n";
印出（Endanger_number）筆資料。
例如: "Animal:(scientific_name).\nNumber: (number)\n" (順序就按照一開始add 的順序即可。)
※ Python 的寫法與上方雷同，void意指函式(方法)不回傳值的意思。

製作一選單
輸入
a (add)加入一個動物的資料(注意讀名字要用getline)
u (update)更新一個動物的資料(一定會給你animal_list 裏面有的資料)
d (display)顯示目前Animal_list 裏面瀕臨絕種的動物
q 離開程式 輸出"That are the endanger animal list we have now. Bye bye.\n"

sellprice 等於剩下的車的賣出的總和

Sample Input 1
a Dog
1000000
a Black Rhinoceros
3100
a Chinese Alligator
150
a Leatherback Turtle
26000
u Leatherback Turtle
30000
d
u Chinese Alligator
2000
d
q
Sample Output 1
Add. Animal: Dog.
Number: 1000000
Endanger species: No
Add. Animal: Black Rhinoceros.
Number: 3100
Endanger species: No
Add. Animal: Chinese Alligator.
Number: 150
Endanger species: Yes
Add. Animal: Leatherback Turtle.
Number: 26000
Endanger species: No
Update. Animal: Leatherback Turtle.
Number: 30000
Endanger species: No
There are 1 animals who are endanger species
Animal: Chinese Alligator.
Number: 150
Update. Animal: Chinese Alligator.
Number: 2000
Endanger species: No
There are 0 animals who are endanger species
That are the endanger animal list we have now. Bye bye.
Sample Input 2
a Loxodonta africana
800
u Loxodonta africana
900
d
a Thunnus alalunga
2000
a Panthera pardus orientalis
800
a Vulpes lagopus
900
a Gorilla gorilla diehli
2000
u Gorilla gorilla diehli
750
d
a Ailuropoda melanoleuca
300
u Ailuropoda melanoleuca
500
d
q
Sample Output 2
Add. Animal: Loxodonta africana.
Number: 800
Endanger species: Yes
Update. Animal: Loxodonta africana.
Number: 900
Endanger species: Yes
There are 1 animals who are endanger species
Animal: Loxodonta africana.
Number: 900
Add. Animal: Thunnus alalunga.
Number: 2000
Endanger species: No
Add. Animal: Panthera pardus orientalis.
Number: 800
Endanger species: Yes
Add. Animal: Vulpes lagopus.
Number: 900
Endanger species: Yes
Add. Animal: Gorilla gorilla diehli.
Number: 2000
Endanger species: No
Update. Animal: Gorilla gorilla diehli.
Number: 750
Endanger species: Yes
There are 4 animals who are endanger species
Animal: Loxodonta africana.
Number: 900
Animal: Panthera pardus orientalis.
Number: 800
Animal: Vulpes lagopus.
Number: 900
Animal: Gorilla gorilla diehli.
Number: 750
Add. Animal: Ailuropoda melanoleuca.
Number: 300
Endanger species: Yes
Update. Animal: Ailuropoda melanoleuca.
Number: 500
Endanger species: Yes
There are 5 animals who are endanger species
Animal: Loxodonta africana.
Number: 900
Animal: Panthera pardus orientalis.
Number: 800
Animal: Vulpes lagopus.
Number: 900
Animal: Gorilla gorilla diehli.
Number: 750
Animal: Ailuropoda melanoleuca.
Number: 500
That are the endanger animal list we have now. Bye bye.
Hint
請注意空格和空行(換行之意)。<br>
讀名字要用getline。<br>
getline的基本用法, <br>
(c++版本)for string, string a;getline(cin,a); <br>
 for char, char a[256];cin.getline(a,256); <br>
上面的資料僅供參考,衹要輸出的結果沒問題就可以了。<br>
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

typedef struct data{
    char scientific_name[256];
    int number;
}Data;

class Animal{
    public:
        //constructor
        Animal(){
            for(int i=0; i<500; i++){
                strcpy(Animal_list[i].scientific_name, "");
                Animal_list[i].number = 0;
                type = 0;
                Endanger_number = 0;
            }
        }

        //add animal into Animal_list
        void add(Data x){
            string str;
            getline(cin, str);
            
            cout << "Add. Animal: " << x.scientific_name << "." << endl;
            cout << "Number: " << x.number << endl;
            if(x.number < 1000){
                cout << "Endanger species: Yes" << endl;
                Endanger_number++;
            }
            else{
                cout << "Endanger species: No" << endl;
            }
            type++;
        }

        void update(Data x){

        }

        void display(){
            cout << "There are" << Endanger_number << "animals who are endanger species" << endl;
            for(int i=0; i<500; i++){
                if(Animal_list[i].number < 1000 && Animal_list[i].number != 0){
                    cout << "Animal: " << Animal_list[i].scientific_name << endl;
                    cout << "Number" << Animal_list[i].number << endl;
                }
            }
        }
    
    private:
        Data Animal_list[500];
        int type;
        int Endanger_number;
};

int main(void){
    
    
    return 0;
}