#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[]) {
    QString zhongwen = "你好";
    QApplication a(argc, argv);
    QPushButton button(zhongwen, nullptr);
    button.resize(300, 100);
    button.show();

    return QApplication::exec();
}
