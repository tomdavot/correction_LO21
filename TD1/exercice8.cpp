#include <iostream>
#include "exercice8.h"

void nsp1::bonjour()
{
  std::cout << "hello\n";
}

void nsp2::bonjour()
{
  std::cout << "nichao\n";
}

void exercice8(){
  nsp1::bonjour();
  nsp2::bonjour();
}

