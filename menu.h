#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

enum ChoixMenu
{
    JOUER = 'j',
    AFFICHER_SCORES = 'a',
    QUITTER = 'q',
    INCORRECT
};

ChoixMenu demanderChoixMenu(void);
void afficheMenu(void);

#endif // MENU_H_INCLUDED
