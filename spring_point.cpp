//
// Created by 16411 on 9/3/2022.
//

#include "spring_point.h"

num_vector spring_point::get_position() {
    return position;
}

num_vector spring_point::compute_force() {
    double k = 1, mu = 0.1;
    num_vector position_(position.get_x() - 200, position.get_y() - 200);
    num_vector force = -position_ * k - speed * mu + NEGATIVE_Y_VECTOR * 100;
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
    update_speed();
    update_position();
}