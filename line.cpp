#include "line.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include "point.cpp"
Line::Line(Point a, Point b):a(a), b(b){};
Line::Line(Point &other): a(other.a), b(other.b){};
bool Line::equals(Point &other){
    return other.a=a && other.b=b;
}
void flip(){
    
}