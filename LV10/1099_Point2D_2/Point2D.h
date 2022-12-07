class Point2D{
      public:    
            Point2D();   
            Point2D(int x, int y);   
            int getX();
            int getY();
            Point2D operator+(Point2D &p); // 重載+運算子    
            Point2D operator-(Point2D &p); // 重載-運算子
            Point2D operator*(Point2D &p); //重載乘法
            Point2D operator+(int add_num); //friend 重載+運算子 令x及y軸各加上一數字
            //friend 重載+運算子 令一數字加上x及y軸
 
      private:
            int X;   
            int Y;
};
