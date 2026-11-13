#include <iostream>
#include "Tableau.hpp"

using namespace std;

int main() {
    cout << "Tableau dynamique avec operateur [] " << endl;

    try {
        // 1. Creation d'un tableau de 5 cases
        Tableau tab(5);
        
        cout << "\nTableau initial : ";
        tab.afficher();

        // 2. Remplissage en utilisant l'operateur [] (ecriture)
        cout << "Remplissage..." << endl;
        tab[0] = 10;
        tab[1] = 20;
        tab[2] = 30;
        tab[3] = 40;
        tab[4] = 50;

        cout << "Tableau rempli  : ";
        tab.afficher();

        // 3. Lecture avec l'operateur []
        cout << "\ntab[2] = " << tab[2] << endl;
        cout << "tab[4] = " << tab[4] << endl;

        // 4. Test d'un index invalide (doit lever une exception)
        cout << "\nTentative d'acces a l'index 10..." << endl;
        cout << tab[10] << endl; // Va planter et aller dans le catch

    } 
    catch (const out_of_range& e) {
        // On attrape l'erreur proprement
        cout << "ERREUR : " << e.what() << endl;
    }
    catch (const exception& e) {
        cout << "ERREUR GENERALE : " << e.what() << endl;
    }

    cout << "\n[Fin du programme]" << endl;
    return 0;
}