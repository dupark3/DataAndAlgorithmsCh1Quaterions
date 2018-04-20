#include <iostream>
#include <string>

#include "Quaterion.h"

using namespace std;

Quaterion operator+(const Quaterion& q1, const Quaterion& q2){
    double a = q1.a + q2.a;
    double b = q1.b + q2.b;
    double c = q1.c + q2.c;
    double d = q1.d + q2.d;
    Quaterion new_quaterion(a, b, c, d);
    return new_quaterion;
}

Quaterion operator-(const Quaterion& q1, const Quaterion& q2){
    double a = q1.a - q2.a;
    double b = q1.b - q2.b;
    double c = q1.c - q2.c;
    double d = q1.d - q2.d;
    Quaterion new_quaterion(a, b, c, d);
    return new_quaterion;
}

Quaterion operator*(const Quaterion& q1, const Quaterion& q2){
    double a = (q1.a * q2.a) - (q1.b * q2.b) - (q1.c * q2.c) - (q1.d * q2.d);
    double b = (q1.a * q2.b) + (q1.b * q2.a) + (q1.c * q2.d) - (q1.d * q2.c);
    double c = (q1.a * q2.c) + (q1.c * q2.a) + (q1.d * q2.b) - (q1.b * q2.d);
    double d = (q1.a * q2.d) + (q1.d * q2.a) + (q1.b * q2.c) - (q1.c * q2.b);
    Quaterion new_quaterion(a, b, c, d);
    return new_quaterion;
}

Quaterion operator/(const Quaterion& q1, const Quaterion& q2){
    double a = ((q1.a * q2.a) + (q1.b * q2.b) + (q1.c * q2.c) + (q1.d * q2.d)) / 
               ((q2.a * q2.a) + (q2.b * q2.b) + (q2.c * q2.c) + (q2.d * q2.d));
    double b = ((q1.b * q2.a) - (q1.a * q2.b) - (q1.d * q2.c) + (q1.c * q2.d)) /
               ((q2.a * q2.a) + (q2.b * q2.b) + (q2.c * q2.c) + (q2.d * q2.d));
    double c = ((q1.c * q2.a) + (q1.d * q2.b) - (q1.a * q2.c) - (q1.b * q2.d)) /
               ((q2.a * q2.a) + (q2.b * q2.b) + (q2.c * q2.c) + (q2.d * q2.d));
    double d = ((q1.d * q2.a) - (q1.c * q2.b) + (q1.b * q2.c) - (q1.a * q2.d)) /
               ((q2.a * q2.a) + (q2.b * q2.b) + (q2.c * q2.c) + (q2.d * q2.d));
    Quaterion new_quaterion(a, b, c, d);
    return new_quaterion;
}

std::ostream& operator<<(std::ostream& os, const Quaterion& q){
    os << q.a << " + " << q.b << "i + " << q.c << "j + " << q.d << "k";
    return os;
}

std::istream& operator>>(std::istream& is, Quaterion& q){
    string s;
    getline(is, s);

    return is;
}