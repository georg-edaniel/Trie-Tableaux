/*
  Titre      : Titre du programme
  Auteur     :  Philip Moumie
  Date       : 26/11/2024
  Description: Une description du programme
  Version    : 0.0.1
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Fonction pour afficher le tableau 
void afficherTableau(const vector<int>& tableau){
    for (int val : tableau){
        cout << val << " ";
    }
    cout << endl;
}

// Fonction pour trier le tableau par reference
void trierTableau(vector<int>& tableau){
    sort(tableau.begin(), tableau.end());
}

int main(){
    // Creer un tableau dynamique
    vector<int> tableau = {5, 3, 8, 1, 2};
    cout << "Tableau initial : ";
    afficherTableau(tableau);

    // Trier le tableau par référence
    trierTableau(tableau);
    cout << "Tableau trié du plus petit au plus grand : ";
    afficherTableau(tableau);

    return 0;
    }