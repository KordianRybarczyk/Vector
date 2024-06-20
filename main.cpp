#include <iostream>
#include "Vector.h"
using namespace std;

int main() {

    Vector v1 = Vector::XY(4, 9);
    v1.show();

    Vector v2 = Vector::LengthAndAngle(3, 2);
    v2.show();

    return 0;
}