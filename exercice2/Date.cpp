#include "Date.hpp"

// Constructeur
Date::Date(int j, int m, int a) : jour(j), mois(m), annee(a) {}

// Surcharge de ==
bool Date::operator==(const Date& autre) const {
    // Les dates sont identiques si jour, mois ET annee sont egaux
    return (jour == autre.jour) && 
           (mois == autre.mois) && 
           (annee == autre.annee);
}

// Surcharge de !=
bool Date::operator!=(const Date& autre) const {
    // Une date est differente si elle n'est PAS egale  On reutilise l'operateur == qu'on vient de creer !
    return !(*this == autre); 
}

// Affichage
void Date::afficher() const {
    std::cout << jour << "/" << mois << "/" << annee << std::endl;
}