#include <QApplication>
#include <QPushButton>

    int main(int argc, char * argv[]) {

    QApplication app(argc, argv);


    QPushButton bouton("Quitter");
    QObject::connect(&bouton,SIGNAL(clicked()),&app,SLOT(quit()));
    bouton.show();

    QPushButton bouton2("Deuxième bouton");
    bouton2.show();

    return app.exec();
}
