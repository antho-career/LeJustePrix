#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include <iostream>
#include <array>
#include "constantes.h"

//pas de using namespace dans le header
using TableauDeScore = std::array<int, NOMBRE_SCORES>;

inline void demanderProposition(int &proposition)
{
    std::cout << "Proposition ? ";
    std::cin >> proposition;
};//inline permet de gagner du temps d execution. La fonction n est pas appelee, elle est directement definie dans le header.
//on indique au compilateur, qu'il doit remplacer l'ensemble des appels a cette fonction par le contenu de cette fonction.
//il faut donc un copier/coller du code aux differents endroits ou la fonction est appelée.

int jouerParties(int);
void afficherScores(TableauDeScore &scores);

#endif // JEU_H_INCLUDED
