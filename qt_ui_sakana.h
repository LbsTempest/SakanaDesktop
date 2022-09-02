//
// Created by 16411 on 9/2/2022.
//

#ifndef SAKANA_QT_UI_SAKANA_H
#define SAKANA_QT_UI_SAKANA_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Qt_UI_sakana; }
QT_END_NAMESPACE

class Qt_UI_sakana : public QWidget {
Q_OBJECT

public:
    explicit Qt_UI_sakana(QWidget *parent = nullptr);

    ~Qt_UI_sakana() override;

private:
    Ui::Qt_UI_sakana *ui;
};


#endif //SAKANA_QT_UI_SAKANA_H
