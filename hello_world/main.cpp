#include <QApplication>
#include <QLabel>


int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QLabel *label = new QLabel;
    label->setText("Hello World!");
    label->show();

    return app.exec();
}
