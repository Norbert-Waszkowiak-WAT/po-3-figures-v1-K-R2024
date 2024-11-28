#include "point.h"
#include <string>
#include <sstream>
#include <iomanip>

Point::Point(double x1, double y1):x(x1), y(y1){};

double Point::getX(){
    return x;
}
double Point::getY(){
    return y;
}
Point::Point(Point &other):x(other.getX()), y(other.getY()) {};

bool Point::equals(Point &other){
    return other.getX()== x && other.getY()==y;
}
void Point::flip(){
    x=x*(-1);
    y=y*(-1);
}
void Point::move(double x1, double y1){
    x=x+x1;
    y=y+y1;
}
std::string Point::toString(){
    std::ostringstream oss;
    oss<<std::fixed<<std::setprecision(1);
    oss<<"Point("<<x<<", "<<y<<")";
    return oss.str();
}