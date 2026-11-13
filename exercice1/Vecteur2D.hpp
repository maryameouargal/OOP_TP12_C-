#ifndef VECTEUR2D_HPP
#define VECTEUR2D_HPP

#include <iostream>

class Vecteur2D {
private:
    double x;
    double y;

public:
    // Constructeur avec parametres
    Vecteur2D(double x = 0.0, double y = 0.0);

    // Surcharge de l'operateur +
    Vecteur2D operator+(const Vecteur2D& autre) const;

    // Methode pour afficher
    void afficher() const;
};

#endif