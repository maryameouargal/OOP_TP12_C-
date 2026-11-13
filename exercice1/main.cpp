#include <iostream>
#include "Vecteur2D.hpp"

using namespace std;

int main() {
    cout << " Surcharge de l'operateur + " << endl;

    // 1. Creation de deux vecteurs
    Vecteur2D v1(2.5, 3.0);
    Vecteur2D v2(1.5, 4.5);

    // 2. Affichage des vecteurs de depart
    cout << "Vecteur 1 : ";
    v1.afficher();

    cout << "Vecteur 2 : ";
    v2.afficher();

    // 3. Addition des deux vecteurs grace a l'operateur +
    Vecteur2D resultat = v1 + v2;

    // 4. Affichage du resultat
    cout << "Resultat (v1 + v2) : ";
    resultat.afficher();

    return 0;
}