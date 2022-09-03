#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QString subtitle = "sakana";
    QApplication a(argc, argv);
    QPushButton button(subtitle, nullptr);
    button.resize(300, 100);
    button.show();

    return QApplication::exec();
}
