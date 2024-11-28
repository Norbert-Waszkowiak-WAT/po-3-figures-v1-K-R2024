#ifndef untitled_line
#define untitled_line
#include "point.cpp"
#include <iostream>
class Line{
    private:
        Point a;
        Point b;
    public:
        Line(Point a, Point b);
        Line(Point &other);
        bool equals(Point &other);
        void flip();
        void move(double x, double y);
        std::string toString();
}
#endif