/*
說明
延續類別練習 I
試寫一個名為student的類別
其中屬性包含:
name, gender, grades
方法(函數)包含:
avg: 回傳grades list的平均值
add(grade): 新增成績到grades list中
fcount: 回傳不及格(<60)的總數
show: 可以將學生資料依本題格式列印出來 在建立實體實傳入 姓名及性別

將下方程式碼加入類別中

s1 = student("Tom","M")
s2 = student("Jane","F")
s3 = student("John","M")
s4 = student("Ann","F")
s5 = student("Peter","M")
s1.add(80)
s1.add(90)
s1.add(55)
s1.add(77)
s1.add(40)
s2.add(58)
s2.add(87)
s3.add(100)
s3.add(80)
s4.add(40)
s4.add(55)
s5.add(60)
s5.add(60)
 
top_student = top(s1,s2,s3,s4,s5)
分別將每個學生的成績平均、不及格的的數目印出
於類別外寫一個top的函數: def top(*students): -> student
傳入值為學生物件的序列，以不定個參數的型式傳入
將平均分數最高的學生回傳，回傳值為自訂之student類別型態的實體

Input Format
無

Output Format
該名學生的：
姓名：...
性別：...
分數： [...]
平均： ...
不及格科目數： ...
(空一行)

Sample Input
no
Sample Output
Name: Tom
Gender: M
Grades: [80, 90, 55, 77, 40]
Avg: 68.4
Fail Number: 2
 
Name: Jane
Gender: F
Grades: [58, 87]
Avg: 72.5
Fail Number: 1
 
Name: John
Gender: M
Grades: [100, 80]
Avg: 90.0
Fail Number: 0
 
.......
 
Name: Peter
Gender: M
Grades: [60, 60]
Avg: 60.0
Fail Number: 0
 
Top Student:
Name: John
Gender: M
Grades: [100, 80]
Avg: 90.0
Fail Number: 0
 
Hint
※ 特別注意Top Student的最後一行也要換行
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class student{
    public:
        //constructor
        student(){
            name = "No name";
            gender = "Unknown";
            for(int i=0; i<100; i++){
                grades[i] = 0;
            }
            count = 0;
            fail_count = 0;
        }

        //overload
        student(string na, string ge){
            name = na;
            gender = ge;
        }

        //attribute
        string name;
        string gender;
        int grades[100];
        int count;
        int fail_count;

        //method
        double avg(){
            double avg;

            for(int i=0; i<count; i++){
                avg += grades[i];
            }
            avg /= count;

            return avg;
        }

        void add(int grade){
            grades[count] = grade;
            count++;
        }

        int fcount(){
            for(int i=0; i<count; i++){
                if(grades[i] < 60){
                    fail_count++;
                }
            }
        }

        void show(){
            
        }

        student top(student *student){

        }
};

int main(void){
    student s1 = student("Tom","M");
    student s2 = student("Jane","F");
    student s3 = student("John","M");
    student s4 = student("Ann","F");
    student s5 = student("Peter","M");
    s1.add(80);
    s1.add(90);
    s1.add(55);
    s1.add(77);
    s1.add(40);
    s2.add(58);
    s2.add(87);
    s3.add(100);
    s3.add(80);
    s4.add(40);
    s4.add(55);
    s5.add(60);
    s5.add(60);
    
    student top_student = top(s1,s2,s3,s4,s5)
    
    return 0;
}