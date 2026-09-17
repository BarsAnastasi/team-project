#include "voloshenko.h"
#include <cmath>

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0; // полупериметр
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double trianglePerimeter(double a, double b, double c) {
    return a + b + c;
}
