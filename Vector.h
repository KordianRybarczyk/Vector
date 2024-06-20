//
// Created by kordi on 21.06.2024.
//

#ifndef UNTITLED9_VECTOR_H
#define UNTITLED9_VECTOR_H

#pragma once
#include <string>
using namespace std;

class Vector {
private:
    double v_x;
    double v_y;
    Vector();
    Vector(double x = 0, double y = 0);

public:
    void show();
    static Vector LengthAndAngle(double length, double angle);
    static Vector XY(double x, double y);
};
#endif //UNTITLED9_VECTOR_H
