#include <iostream>
#include "Point2D.h"
using namespace std;
 
int main()
{  
    int x1, y1, x2, y2, num;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> num;
    Point2D p1(x1, y1);  
    Point2D p2(x2, y2);  
    Point2D p3;   
 
    p3 = p1 + p2;   
    cout << "P1 + P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;   
 
    p3 = p1 - p2;   
    cout << "P1 - P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;    
 
    p3 = p1 * p2;   
    cout << "P1 * P2 = X=" << p3.getX() << ", Y=" << p3.getY() << endl;
 
    p3 = p1 + num;   
    cout << "P1 + " << num <<" = X=" << p3.getX() << ", Y=" << p3.getY() << endl;
 
    return 0;
}