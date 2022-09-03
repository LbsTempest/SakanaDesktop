#include <QApplication>
#include <thread>
#include <chrono>
#include "frame.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    frame window;
    window.show();

    std::thread thread([&]() {
        while (window.isEnabled()) {
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
            window.repaint();
        }
    });

    return QApplication::exec();
}
