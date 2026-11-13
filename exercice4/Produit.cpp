#include "Produit.hpp"

// Constructeur
Produit::Produit(const std::string& n, double p, int q) 
    : nom(n), prix(p), quantite(q) {}

// Surcharge de l'operateur <<
std::ostream& operator<<(std::ostream& os, const Produit& p) {
    os << "Produit [Nom: " << p.nom 
       << " | Prix: " << p.prix << " DH"
       << " | Quantite: " << p.quantite << "]";
    return os;
}