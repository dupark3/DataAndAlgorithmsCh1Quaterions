#ifndef GUARD_Quaterion_h
#define GUARD_Quaterion_h

#include <iostream>

class Quaterion{
public:
    Quaterion() { }
    Quaterion(double p, double q, double r, double s) : a(p), b(q), c(r), d(s) { }

    friend Quaterion& operator+(const Quaterion&, const Quaterion&);
    friend Quaterion& operator-(const Quaterion&, const Quaterion&);
    friend Quaterion& operator*(const Quaterion&, const Quaterion&);
    friend Quaterion& operator/(const Quaterion&, const Quaterion&);

    friend std::ostream& operator<<(std::ostream&, const Quaterion&);
    friend std::istream& operator>>(std::istream&, Quaterion&);
    
private:
    double a;
    double b;
    double c;
    double d;
}

Quaterion& operator+(const Quaterion&, const Quaterion&);
Quaterion& operator-(const Quaterion&, const Quaterion&);
Quaterion& operator*(const Quaterion&, const Quaterion&);
Quaterion& operator/(const Quaterion&, const Quaterion&);

std::ostream& operator<<(std::ostream&, const Quaterion&);
std::istream& operator>>(std::istream&, Quaterion&);

#endif