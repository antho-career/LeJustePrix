#include <iostream>
#include <array>
#include <random>
#include "constantes.h"
#include "jeu.h"
#include "menu.h"

using namespace std;

int main()
{
    TableauDeScore scores{0,0,0};
    int indiceCourant{0};
    auto generateurAleatoire = std::random_device{};
    //auto generateur = mt19937{8'354};//8'354 est la graine (seed) a partir duquel les calculs de random sont faits (pseudo aléatoire).
    auto generateur = mt19937{generateurAleatoire()};//vrai nombre aleatoire
    auto distribution = std::uniform_int_distribution(BORNE_MIN, BORNE_MAX);

    bool continuer{true};
    while(continuer)
    {
        afficheMenu();
        auto choix{ChoixMenu::JOUER};
        choix = demanderChoixMenu();

        switch(choix)
        {
        case ChoixMenu::JOUER:
            scores[indiceCourant] = jouerParties(distribution(generateur));
            indiceCourant = (indiceCourant + 1)%NOMBRE_SCORES;
            break;
        case ChoixMenu::AFFICHER_SCORES:
            afficherScores(scores);
            break;
        case ChoixMenu::QUITTER:
        case ChoixMenu::INCORRECT:
        default:
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}


