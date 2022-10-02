#include <iostream>
#include "fraction.h"

using namespace MATH;

Fraction::Fraction(int numerateur, int denominateur) : numerateur(numerateur), denominateur(denominateur)
{
    std::cout << "Construction de " << this << std::endl;
    simplification();
    /*
    this->numerateur=numerateur;
    this->denominateur=denominateur;
    */
}

Fraction::~Fraction()
{
    std::cout << "Destruction de " << this << std::endl;
}

void Fraction::setFraction(int numerateur, int denominateur)
{
    if(denominateur==0)
	throw FractionException((char*)"Erreur, le denominateur n'est pas nul.");
    this->numerateur=numerateur;
    this->denominateur=denominateur;
    simplification();
}

// à ajouter en tant méthode privée de la classe Fraction
void Fraction::simplification()
{
// si le numerateur est 0, le denominateur prend la valeur 1
    if (numerateur==0) { denominateur=1; return; }
/* un denominateur ne devrait pas être 0;
   si c’est le cas, on sort de la méthode */
    if (denominateur==0) return;
/* utilisation de l’algorithme d’Euclide pour trouver le Plus Grand Commun
   Denominateur (PGCD) entre le numerateur et le denominateur */
    int a=numerateur, b=denominateur;
// on ne travaille qu’avec des valeurs positives...
    if (a<0) a=-a; if (b<0) b=-b;
    if (denominateur==1) return;
    while(a!=b){ if (a>b) a=a-b; else b=b-a; }
// on divise le numerateur et le denominateur par le PGCD=a
    numerateur/=a; denominateur/=a;
// si le denominateur est négatif, on fait passer le signe - au denominateur
    if (denominateur<0) { denominateur=-denominateur; numerateur=-numerateur; }
}

Fraction Fraction::somme(const Fraction &f) const
{
    return Fraction(f.getDenominateur()*getNumerateur()+getDenominateur()*f.getNumerateur(),getDenominateur()*f.getDenominateur());
}

Fraction Fraction::operator+(const Fraction &f) const { return somme(f); }

/*
Fraction Fraction::operator+(int i) const
{
    return somme(Fraction(i));
}
*/

Fraction operator+(int i, Fraction f)
{
    return f + i;
}

Fraction &Fraction::operator++()
{
    *this=*this+1;
    return *this;
}

Fraction Fraction::operator++(int)
{
    Fraction tmp = *this;
    *this=*this+1;
    return tmp;
}

std::ostream& operator<<(std::ostream& F, const MATH::Fraction& frac){
    F<<frac.getNumerateur();
    if (frac.getDenominateur()!=1) F<<"/"<<frac.getDenominateur();
    return F;
}
