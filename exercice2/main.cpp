#include <iostream>
#include "Date.hpp"

using namespace std;

int main() {
    cout << " Test de comparaison de dates" << endl;

    // 1. Creation de plusieurs dates
    Date d1(15, 8, 2024);
    Date d2(15, 8, 2024); // Identique a d1
    Date d3(1, 1, 2025);  // Different

    // 2. Affichage
    cout << "\nDate 1 : "; d1.afficher();
    cout << "Date 2 : "; d2.afficher();
    cout << "Date 3 : "; d3.afficher();

    // 3. Test avec l'operateur ==
    cout << "\nTest de  " << endl;
    if (d1 == d2) {
        cout << "Date 1 et Date 2 sont identiques." << endl;
    }
    if (d1 == d3) {
        cout << "Date 1 et Date 3 sont identiques." << endl;
    } else {
        cout << "Date 1 et Date 3 sont differentes." << endl;
    }

    // 4. Test avec l'operateur !=
    cout << "\n Test de != " << endl;
    if (d1 != d2) {
        cout << "Date 1 et Date 2 sont differentes." << endl;
    } else {
        cout << "Date 1 et Date 2 ne sont pas differentes (elles sont egales)." << endl;
    }
    
    if (d1 != d3) {
        cout << "Date 1 et Date 3 sont differentes." << endl;
    }

    return 0;
}