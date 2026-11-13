#ifndef TABLEAU_HPP
#define TABLEAU_HPP

#include <iostream>
// Pour std::out_of_range
#include <stdexcept> 

class Tableau {
private:
    int* data;  // Pointeur vers le tableau dynamique
    int taille; // Nombre d'elements

public:
    // Constructeur : alloue le tableau
    Tableau(int n);
    
    // Destructeur : libere la memoire
    ~Tableau();

    // Surcharge de l'operateur [] (pour la lecture)
    int operator[](int index) const;

    // Surcharge de l'operateur [] (pour l'ecriture)
    int& operator[](int index);

    // Methode pour afficher
    void afficher() const;
};

#endif