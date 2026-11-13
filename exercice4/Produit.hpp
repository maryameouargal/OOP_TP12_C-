#ifndef PRODUIT_HPP
#define PRODUIT_HPP

#include <iostream>
#include <string>

class Produit {
private:
    std::string nom;
    double prix;
    int quantite;

public:
    // Constructeur
    Produit(const std::string& n, double p, int q);

    // Declaration de la fonction amie pour surcharger <<
    friend std::ostream& operator<<(std::ostream& os, const Produit& p);
};

#endif