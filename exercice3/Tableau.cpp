#include "Tableau.hpp"

// Constructeur
Tableau::Tableau(int n) {
    if (n <= 0) {
        throw std::invalid_argument("La taille doit etre positive.");
    }
    taille = n;
    // Allocation dynamique
    data = new int[taille]; 
    
    // Initialisation a 0 (bonne pratique)
    for (int i = 0; i < taille; i++) {
        data[i] = 0;
    }
}

// Destructeur
Tableau::~Tableau() {
    delete[] data; // On libere la memoire !
}

// Version LECTURE (const) de l'operateur []
int Tableau::operator[](int index) const {
    if (index < 0 || index >= taille) {
        throw std::out_of_range("Index invalide (lecture).");
    }
    return data[index];
}


int& Tableau::operator[](int index) {
    if (index < 0 || index >= taille) {
        throw std::out_of_range("Index invalide (ecriture).");
    }
    return data[index];
}

// Affichage du tableau
void Tableau::afficher() const {
    std::cout << "[ ";
    for (int i = 0; i < taille; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << "]" << std::endl;
}