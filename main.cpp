#include <iostream>     //La seule lib nécessaire pour écrire/lire

using namespace std;   //On l'utilise pour ne pas devoir écrire "std::" devant cout et endl.

int main() {
    //Afficher le titre de l'application
    cout << "CNED-Gestion de logs" << endl;
    //Afficher le menu
    cout << "---MENU---" << endl;
    cout << "1. Afficher log sudo" << endl;
    cout << "2. Afficher et enregistrer log SSH" << endl;
    cout << "3. Quitter" << endl;

    int choixUtilisateur; //création de la boite

    cout <<"Choisir une option : ";  //Utilisation de COUT pour demander a la personne de taper son choix
    cin >> choixUtilisateur;        //Utilisation de CIN pour prendre ce qui est tapé et le mettre dans la boite
    cout << "Vous avez tapé: " << choixUtilisateur << endl;

    //On regarde ce que contient la boite
    if (choixUtilisateur == 1) {
        cout <<"Vous avez choisi l'option 1." << endl;
    }
    else if (choixUtilisateur == 2) {
        cout <<"Vous avez choisi l'option 2." << endl;
    }
    else if (choixUtilisateur == 0) {
        cout <<"Sortie du programme." << endl;
    }
    return 0; // Le programme s'est bien terminé

}