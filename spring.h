//
// Created by 16411 on 9/3/2022.
//
#include "num_vector.h"

#ifndef SAKANA_SPRING_H
#define SAKANA_SPRING_H


class spring {
public:
    spring(): position(0, 0), speed(0, 0) {}
    spring(const spring &) = default;

    num_vector compute_force();
    void update_position();
    void update_speed();
    void update_();

private:
    num_vector position;
    num_vector speed;
};


#endif //SAKANA_SPRING_H