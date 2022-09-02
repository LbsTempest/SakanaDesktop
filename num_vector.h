//
// Created by Nickid2018 on 2022/9/3.
//

#ifndef SAKANA_NUM_VECTOR_H
#define SAKANA_NUM_VECTOR_H

class num_vector {
public:
    num_vector(double x, double y): x(x), y(y) {}
    num_vector(const num_vector &) = default;

    num_vector normalize() const;
    num_vector add(const num_vector &) const;
    num_vector minus(const num_vector &) const;
    num_vector multiply(double) const;
    num_vector divide(double) const;

    num_vector operator +(const num_vector &) const;
    num_vector operator -(const num_vector &) const;
    num_vector operator *(double) const;
    num_vector operator /(double) const;

private:
    double x;
    double y;
};


#endif //SAKANA_NUM_VECTOR_H