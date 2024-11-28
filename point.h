#ifndef Untitled_Point
#define Untitled_Point
#include <iostream>
#include <string>
class Point{
    private:
        double x;
        double y;
    public:
        Point(double x1, double y1);
        Point(Point &other);
        bool equals(Point &other);
        double getX();
        double getY();
        void flip();
        void move(double x1, double y1);
        std::string toString();

};
#endif