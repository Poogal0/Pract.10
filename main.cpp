#include <QApplication>
#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QLineEdit>
#include <QPushButton>

class EllipseWidget : public QWidget {
public:
    EllipseWidget(QWidget *parent = nullptr) : QWidget(parent), m_x(0) {
        

        m_intervalLineEdit = new QLineEdit(this);
        m_intervalLineEdit->setText("50");
        m_intervalLineEdit->setGeometry(10, 10, 80, 30);

        m_widthButton = new QPushButton(this);
        m_widthButton->setText("Width");
        m_widthButton->setGeometry(100, 10, 80, 30);
        connect(m_widthButton, &QPushButton::clicked, this, &EllipseWidget::onWidthButtonClicked);

        
    }



private slots:
    

    void onWidthButtonClicked() {
        int width = m_intervalLineEdit->width();
        m_intervalLineEdit->setFixedWidth(width + 10);
    }

    

private:
    int m_x;
    QLineEdit *m_intervalLineEdit;
    QPushButton *m_widthButton;
    
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    EllipseWidget *widget = new EllipseWidget();
    widget->setFixedSize(400, 200);
    widget->show();

    return app.exec();
}
