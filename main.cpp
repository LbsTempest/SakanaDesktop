#include <QApplication>
#include <QPushButton>
#include "frame.h"

int main(int argc, char *argv[]) {
    QString subtitle = "sakana";
    QApplication a(argc, argv);
//    QPushButton button(subtitle, nullptr);
//    button.resize(300, 100);
//    button.show();
    frame window;
    window.show();

    return QApplication::exec();
}
