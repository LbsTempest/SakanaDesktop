//
// Created by 16411 on 9/3/2022.
//

#include "spring_point.h"

num_vector spring_point::compute_force() {
    double k = 1, mu = 0.1;
    num_vector force = -position * k - speed * mu;
    return force;
}

void spring_point::update_position() {
    double alpha = 1;
    position = position + speed * alpha;
}

void spring_point::update_speed() {
    double alpha = 1;
    speed = speed + compute_force() * alpha;
}

void spring_point::update_() {
    update_position();
    update_speed();
}