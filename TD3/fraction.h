#include <iostream>
#include <string>

namespace MATH {
    class FractionException {
	std::string info;

	public:
	FractionException(char * error) {
	    info=error;
	}

	const std::string& getInfo(){
	    return info;
	}
	
    };
    
  class Fraction
  {
      int numerateur, denominateur;

      void simplification();
      
  public:

      Fraction(int numerateur=0, int denominateur=1);
      ~Fraction();

      int getNumerateur() const { return numerateur; }
      int getDenominateur() const { return denominateur; }

      void setFraction(int numerateur, int denominateur);

      Fraction somme(const Fraction & f) const ;

      Fraction operator+(const Fraction & f) const;

      // On peut ne pas définir operator+(int) car il existe une conversion
      // implicite entre int et Fraction avec les arguments par défauts.
      // Fraction operator+(int i) const;

      Fraction & operator++(); // prefix

      Fraction operator++(int); // postfix
  } ;

  } // namespace MATH

// On est obligé de la définir pour que l'opération de type f2 = 2 + f1
// soit valide
MATH::Fraction operator+(int, MATH::Fraction);

std::ostream& operator<<(std::ostream& F, const MATH::Fraction& frac);
