/*
說明
設計一個Square(正方型)類別包含下列成員：

屬性 (私有)：

int len: 邊長
方法 (公開)：

Square(): 建構式, 將邊長設為0
int area(): 計算面積
void setLen(int n): 設定邊長 (需判斷邊長值的正確性)
int getLen(): 取得邊長
使用Square類別宣告3個邊長為n,m及未定義的物件,並印出它們的面積

Input Format
整數n
整數m

Output Format
面積1
面積2
面積3

Sample Input
10
20
Sample Output
Area = 100 cm^2
Area = 400 cm^2
Area = 0 cm^2
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Square{
    public:
        Square(){
            len = 0;    
        }

        Square(int n){
            len = n;    
        }

        int area(){
            return len * len;
        }

        void setLen(int n){
            if(n < 1){
                cout << "len set error" << endl;
                len = 1;
                return;
            }

            len = n;
        }

        int getLen(){
            return len;
        }
    
    private:
        int len;
};

int main(void){
    int n, m;
    cin >> n;
    cin >> m;

    Square S1(n), S2(m), S3;

    cout << "Area = " << S1.area() << " cm^2" << endl;
    cout << "Area = " << S2.area() << " cm^2" << endl;
    cout << "Area = " << S3.area() << " cm^2" << endl;
    
    return 0;
}