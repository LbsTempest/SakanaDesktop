//
// Created by 16411 on 9/3/2022.
//

#ifndef SAKANA_FRAME_H
#define SAKANA_FRAME_H


#include <QWidget>
#include "spring_point.h"

class frame : public QWidget{
public:
    frame() = default;
    void paintEvent(QPaintEvent *event) override;
private:
    spring_point s_point;
};


#endif //SAKANA_FRAME_H
