//
// Created by 16411 on 9/3/2022.
//

#include "frame.h"
#include "QPainter"
#include "spring_point.h"

spring_point s_point;
frame::frame() {
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setWindowFlag(Qt::WindowStaysOnTopHint);
}

void frame::paintEvent(QPaintEvent *event) {
    QPainter sakana_painter(this);
//    sakana_painter.fillRect(0, 200, 300, 200, Qt::color1);
    sakana_painter.setPen(QPen(Qt::red, 10));
    sakana_painter.drawPoint(s_point.get_position().get_x(), s_point.get_position().get_y());
    s_point.update_();

}