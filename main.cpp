#include <QApplication>
#include <QWidget>
#include <QPainter>
#include <QTimer>

class EllipseWidget : public QWidget {


protected:
    void paintEvent(QPaintEvent *) override {
        QPainter painter(this);
        painter.setBrush(Qt::red);
        painter.setPen(Qt::NoPen);
        painter.drawEllipse(m_x, height() / 2, 50, 50);
    }



private:
    int m_x;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    EllipseWidget *widget = new EllipseWidget();
    widget->setFixedSize(400, 200);
    widget->show();

    return app.exec();
}
