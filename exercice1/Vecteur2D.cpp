#include "Vecteur2D.hpp"

// Constructeur
Vecteur2D::Vecteur2D(double x, double y) : x(x), y(y) {}

// Surcharge de l'operateur +
Vecteur2D Vecteur2D::operator+(const Vecteur2D& autre) const {
    // On cree un nouveau vecteur dont les composantes sont la somme
    return Vecteur2D(this->x + autre.x, this->y + autre.y);
}

// Affichage
void Vecteur2D::afficher() const {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}