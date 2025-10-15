#include <iostream>
#include <fstream>
#include "vector3d.h"

// Edit for homework

using namespace std;

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

// ===== 멤버 연산자 =====
Vector3D Vector3D::operator+(const Vector3D& v) const {
    return Vector3D(x + v.x, y + v.y, z + v.z);
}

Vector3D Vector3D::operator-(const Vector3D& v) const {
    return Vector3D(x - v.x, y - v.y, z - v.z);
}

Vector3D Vector3D::operator*(const Vector3D& v) const {
    return Vector3D(
        y * v.z - z * v.y,
        z * v.x - x * v.z,
        x * v.y - y * v.x
    );
}

Vector3D Vector3D::operator*(double scalar) const {
    return Vector3D(x * scalar, y * scalar, z * scalar);
}

Vector3D Vector3D::operator/(double scalar) const {
    return Vector3D(x / scalar, y / scalar, z / scalar);
}

Vector3D Vector3D::operator-() const {
    return Vector3D(-x, -y, -z);
}


ostream& operator<<(ostream& os, const Vector3D& v) {
    os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
    return os;
}

istream& operator>>(istream& is, Vector3D& v) {
    is >> v.x >> v.y >> v.z;
    return is;
}

Vector3D operator*(double scalar, const Vector3D& v) {
    return Vector3D(scalar * v.x, scalar * v.y, scalar * v.z);
}

Vector3D operator/(double scalar, const Vector3D& v) {
    return Vector3D(scalar / v.x, scalar / v.y, scalar / v.z);
}