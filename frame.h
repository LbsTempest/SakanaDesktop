//
// Created by 16411 on 9/3/2022.
//

#ifndef SAKANA_FRAME_H
#define SAKANA_FRAME_H


#include <QWidget>

class frame : public QWidget{
public:
    frame();
    void paintEvent(QPaintEvent *event) override;
    QPainter a();
};


#endif //SAKANA_FRAME_H
