#include <QApplication>
#include <QWidget>
#include <QLabel>


class FontSizeChanger : public QWidget {
public:
    FontSizeChanger(QWidget *parent = nullptr) : QWidget(parent) {
        setFixedSize(400, 200);
    }
};
int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    FontSizeChanger widget;
    widget.show();

    return app.exec();
}
