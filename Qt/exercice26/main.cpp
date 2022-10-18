#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

int exercice1(int argc,char *argv[])
{
    QApplication app(argc, argv);
    QWidget fenetre;

    fenetre.setFixedSize(250, 120);
    fenetre.setWindowTitle("Joueur");

    QLabel* noml= new QLabel("Nom",&fenetre);
    noml->move(10,10);

    QLineEdit* nom= new QLineEdit(&fenetre);
    nom->setFixedWidth(180);
    nom->move(60,10);

    QPushButton* ok = new QPushButton("ok", &fenetre);
    ok->setFixedWidth(230);
    ok->move(10,60);

    fenetre.show();
    return app.exec();
}

int exercice2(int argc,char *argv[])
{
    QApplication app(argc, argv);
    QWidget fenetre;
    fenetre.setFixedSize(250, 120);
    fenetre.setWindowTitle("Joueur");

    QLineEdit* nom= new QLineEdit(&fenetre);
    nom->setFixedWidth(180);

    QLabel* noml= new QLabel("Nom",&fenetre);
    QPushButton* ok = new QPushButton("ok", &fenetre);

    QHBoxLayout* cnom=new QHBoxLayout;
    cnom->addWidget(noml);
    cnom->addWidget(nom);

    QVBoxLayout* couche=new QVBoxLayout;
    couche->addLayout(cnom);
    couche->addWidget(ok);

    fenetre.setLayout(couche);
    fenetre.show();
    return app.exec();
}

int main(int argc, char * argv[])
{
    return exercice1(argc,argv);
}
