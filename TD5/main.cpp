#include "pioche.h"
#include "plateau.h"
using namespace Set;

int main() {
  try {

    printCouleurs();
    printNombres();
    printFormes();
    printRemplissages();
 
    Jeu &jeu= Jeu::getJeu();
    //    std:: cout << jeu.getCarte(0) << std::endl;
    //    std:: cout << jeu.getCarte(83) << std::endl;
    Plateau p;
    
    for(auto it : p){
	
    }
    for(auto it=p.begin();it!=p.end();++it)
    {
	
    }
    Pioche p1, p2;
    for(size_t i=0; i<5; ++i){
      std::cout << "Jeu 1: " << p1.piocher() << std::endl;
      std::cout << "Jeu 2: " << p2.piocher() << std::endl;
    }

  }
  catch (SetException& e) {
    std::cout << e.getInfo() << "\n";
  }
	


  return 0;
}
