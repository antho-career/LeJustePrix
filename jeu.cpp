#include <iostream>
#include <chrono>
#include "jeu.h"
#include "constantes.h"

using namespace std;

int jouerParties(int leJustePrix)
{
    int proposition{0};
    int nbreTent{0};
    using Duree = std::chrono::duration<double>;
    //auto duree = Duree{3s};
    //cout << duree.count() << endl;
    auto debutPartie = std::chrono::system_clock::now();

    do
    {
        demanderProposition(proposition);
        nbreTent ++;
        if(proposition < BORNE_MIN) break;
        if(proposition > BORNE_MAX) continue;
        if(proposition == leJustePrix)
        {
            cout << "Bravo" << endl;
        }
        else if(proposition > leJustePrix)
        {
            cout << "C est moins" << endl;
        }
        else{
            cout << "C est plus" << endl;
        }
    }while(proposition != leJustePrix);
    auto finPartie = std::chrono::system_clock::now();
    auto duree = std::chrono::duration_cast<Duree>(finPartie - debutPartie);
    cout << "Duree de la partie : " << duree.count() << endl;
    return nbreTent;
}
void afficherScores(TableauDeScore &scores)
{
    cout << "Derniere partie : " << endl;
    for (auto score: scores)
    {
        if(score == 0)
        {
            cout << "-" << endl;
        }
        else
        {
            cout << score << " tentatives" << endl;
        }
    }
}
