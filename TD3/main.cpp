#include<iostream>
#include<string>

#include "fraction.h"

using namespace std;
using namespace MATH;

Fraction* myFunction(){
    Fraction fx(7,8);
    Fraction* pfy=new Fraction(2,3);
    return pfy;
}

int main()
{
    MATH::Fraction f;
    f.setFraction(3, 4);
    
    Fraction f1(3,4);
    Fraction f2(1,6);
    Fraction* pf3=new Fraction(1,2);
    cout<<"ouverture d’un bloc\n";
    Fraction* pf6;
    {
	Fraction f4(3,8);
	Fraction f5(4,6);
	pf6=new Fraction(1,3);
    }
    cout<<"fin d’un bloc\n";
    cout<<"debut d’une fonction\n";
    Fraction* pf7=myFunction();
    cout<<"fin d’une fonction\n";
    cout<<"desallocations controlee par l’utilisateur :\n";
    delete pf6;
    delete pf7;

    Fraction f1_somme = (2);

    Fraction f2_somme = f1_somme +3;
    cout << "Resultat op1 : "<< f2_somme << endl;
    f2_somme = 3 + f1_somme;
    cout << "Resultat op2 : "<< f2_somme << endl;

    
    try
    {
	Fraction f(2,3);
	f.setFraction(2, 0);
	
    } catch(FractionException& f_exception) {cout << f_exception.getInfo() << endl;}
    return 0;
}
