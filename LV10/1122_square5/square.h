#ifndef SQUARE_H
#define SQUARE_H

class Square{
    public:
        Square();
        Square(int n);
        int area();
        void setLen(int n);
        int getLen();
        friend int cmpSquare(Square &q1, Square &q2);
    
    private:
        int len;
};

#endif