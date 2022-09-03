//
// Created by Nickid2018 on 2022/9/3.
//

#include <cmath>
#include "num_vector.h"

num_vector num_vector::add(const num_vector &other) const {
    return {x + other.x, y + other.y};
}

num_vector num_vector::minus(const num_vector &other) const {
    return {x - other.x, y - other.y};
}

num_vector num_vector::multiply(double number) const {
    return {x * number, y * number};
}

num_vector num_vector::divide(double number) const {
    return {x / number, y / number};
}

num_vector num_vector::negate() const {
    return  {-x, -y};
}

double num_vector::length() const {
    return sqrt(x * x + y * y);
}

num_vector num_vector::normalize() const {
    if (*this == ZERO_VECTOR)
        return ZERO_VECTOR;
    return divide(length());
}

double num_vector::dot(const num_vector &other) const {
    return x * other.x + y * other.y;
}

num_vector num_vector::operator+(const num_vector &other) const {
    return add(other);
}

num_vector num_vector::operator-(const num_vector &other) const {
    return minus(other);
}

num_vector num_vector::operator-() const {
    return negate();
}

num_vector num_vector::operator*(double num) const {
    return multiply(num);
}

num_vector num_vector::operator/(double num) const {
    return divide(num);
}

double num_vector::operator*(const num_vector &other) const {
    return dot(other);
}

double num_vector::get_x() const {
    return x;
}

double num_vector::get_y() const {
    return y;
}

bool num_vector::operator==(const num_vector &other) const {
    return x == other.x && y == other.y;
}

bool num_vector::operator!=(const num_vector &other) const {
    return x != other.x || y != other.y;
}

num_vector num_vector::projection(const num_vector &other) const {
    return other.normalize() * (dot(other) / other.length());
}
