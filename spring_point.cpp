//
// Created by 16411 on 9/3/2022.
//

#include "spring_point.h"

num_vector spring_point::get_position() {
    return position;
}

num_vector spring_point::compute_force() {
    double k1 = 1, k2 = 1, mu = 0.01;
    num_vector position_(position.get_x() - 200, (position.get_y() - 200) / 1.25);
    num_vector force = -position_ * k1 - speed * mu + NEGATIVE_Y_VECTOR * 20;
//    double sin = position_.get_x() / position_.length(), cos = position_.get_y() / position_.length();
//    num_vector force(k2 * sin * cos - k1 * position_.length() * sin, k2 * sin * sin - k1 * position_.length() * cos);
//    force = force - speed * mu + POSITIVE_Y_VECTOR * 10;
    return force;
}

void spring_point::update_position() {
    double alpha = 0.1;
    position = position + speed * alpha;
}

void spring_point::update_speed() {
    double alpha = 0.1;
    speed = speed + compute_force() * alpha;
}

void spring_point::update_() {
    update_speed();
    update_position();
}