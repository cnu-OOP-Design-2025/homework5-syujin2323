#pragma once

#include <iostream>

class Vector3D {
private:
    double x, y, z;

public:
    // Constructors
    Vector3D(double x = 0, double y = 0, double z = 0);

    // Operator overloads
    Vector3D operator+(const Vector3D& v) const;
    Vector3D operator-(const Vector3D& v) const;
    Vector3D operator*(const Vector3D& v) const;
    Vector3D operator*(double scalar) const;
    Vector3D operator/(double scalar) const;
    Vector3D operator-() const;

    // Friend functions for input/output
    friend std::ostream& operator<<(std::ostream& os, const Vector3D& v);
    friend std::istream& operator>>(std::istream& is, Vector3D& v);

    friend Vector3D operator*(double scalar, const Vector3D& v);
    friend Vector3D operator/(double scalar, const Vector3D& v);

};
