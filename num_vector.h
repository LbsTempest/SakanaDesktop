//
// Created by Nickid2018 on 2022/9/3.
//

#ifndef SAKANA_NUM_VECTOR_H
#define SAKANA_NUM_VECTOR_H

class num_vector {
public:
    num_vector(double x, double y): x(x), y(y) {}
    num_vector(const num_vector &other) = default;

    [[nodiscard]] num_vector normalize() const;
    [[nodiscard]] num_vector add(const num_vector &) const;
    [[nodiscard]] num_vector minus(const num_vector &) const;
    [[nodiscard]] num_vector multiply(double) const;
    [[nodiscard]] num_vector divide(double) const;
    [[nodiscard]] num_vector negate() const;
    [[nodiscard]] double length() const;
    [[nodiscard]] double dot(const num_vector &) const;
    [[nodiscard]] num_vector projection(const num_vector &) const;

    num_vector operator +(const num_vector &) const;
    num_vector operator -(const num_vector &) const;
    num_vector operator -() const;
    num_vector operator *(double) const;
    num_vector operator /(double) const;
    double operator *(const num_vector &) const;
    bool operator ==(const num_vector &) const;
    bool operator !=(const num_vector &) const;

    [[nodiscard]] double get_x() const;
    [[nodiscard]] double get_y() const;
private:
    double x;
    double y;
};

const num_vector ZERO_VECTOR(0, 0);
const num_vector POSITIVE_X_VECTOR(1, 0);
const num_vector POSITIVE_Y_VECTOR(0, 1);
const num_vector NEGATIVE_X_VECTOR(-1, 0);
const num_vector NEGATIVE_Y_VECTOR(0, -1);

#endif //SAKANA_NUM_VECTOR_H
