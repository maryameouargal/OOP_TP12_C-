#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date {
private:
    int jour;
    int mois;
    int annee;

public:
    // Constructeur
    Date(int j = 1, int m = 1, int a = 2000);

    // Surcharge de l'operateur == (egalite)
    bool operator==(const Date& autre) const;

    // Surcharge de l'operateur != (difference)
    bool operator!=(const Date& autre) const;

    // Affichage
    void afficher() const;
};

#endif