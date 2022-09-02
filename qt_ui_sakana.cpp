//
// Created by 16411 on 9/2/2022.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Qt_UI_sakana.h" resolved

#include "qt_ui_sakana.h"
#include "ui_Qt_UI_sakana.h"


Qt_UI_sakana::Qt_UI_sakana(QWidget *parent) :
        QWidget(parent), ui(new Ui::Qt_UI_sakana) {
    ui->setupUi(this);
}

Qt_UI_sakana::~Qt_UI_sakana() {
    delete ui;
}
