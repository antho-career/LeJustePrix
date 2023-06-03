#include <iostream>
#include "menu.h"

using namespace std;

ChoixMenu demanderChoixMenu()
{
    char saisieChoix;
    cin >> saisieChoix;
    if(saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::AFFICHER_SCORES) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        return static_cast<ChoixMenu>(saisieChoix);
    }
    else
    {
        return ChoixMenu::INCORRECT;
    }
}

void afficheMenu()
{
    cout << "Bienvenue au juste prix" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER) <<   ": Jouer" << endl;
    cout << static_cast<char>(ChoixMenu::AFFICHER_SCORES) <<   ": Afficher scores" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << ": Quitter" << endl;
}
