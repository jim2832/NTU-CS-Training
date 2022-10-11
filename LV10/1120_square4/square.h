#ifndef SQUARE_H
#define SQUARE_H

class Square{
    public:
        Square();
        Square(int n);
        int area();
        void setLen(int n);
        int getLen();
    
    private:
        int len;
};

void cmpSquare(Square &q1, Square &q2);

#endif