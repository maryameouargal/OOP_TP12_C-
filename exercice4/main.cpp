#include <iostream>
#include "Produit.hpp"

using namespace std;

int main() {
    cout << "Test de la surcharge de << " << endl;

    // 1. Creation de produits
    Produit p1("Clavier", 250.0, 10);
    Produit p2("Souris", 120.5, 25);

    // 2. Affichage direct avec cout !
    // Grace a la surcharge, on peut faire ca :
    cout << "\nProduit 1 : " << p1 << endl;
    cout << "Produit 2 : " << p2 << endl;

    // 3. On peut meme enchainer les affichages
    cout << "\nEnchainer : " << p1 << " et " << p2 << endl;

    return 0;
}