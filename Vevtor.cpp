#include <iostream>
#include "Vector.h"
#include <cmath>
using namespace std;

Vector::Vector() {
    v_x = 0;
    v_y = 0;
}

Vector::Vector(double x, double y) {
    v_x = x;
    v_y = y;
}

void Vector::show() {
    cout << "Vector co-ordinates: [" << v_x << ", " << v_y << "]" << endl;
}

Vector Vector::XY(double x, double y) {
    return Vector(x, y);
}

Vector Vector::LengthAndAngle(double length, double angle){
    double angleRAD = angle * M_PI / 180;
    double Xv= length * cos(angleRAD);
    double Yv= length * sin(angleRAD);
    return Vector(Xv, Yv);
}