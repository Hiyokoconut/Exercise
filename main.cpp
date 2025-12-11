/**
* @file main.cpp
 * @brief Application de gestion de logs. (Mission 3 - Iteration 2)
 * This program displays a menu for interacting with different types of logs.
 * It uses a do...while loop and a switch case for the user interface.
 */

#include <iostream>

using namespace std;

int main() {
    int choixUtilisateur;

    //Start of the loop (DO).
    // We open the brace here to say: “Do all this...”
    do {

        // 1. Menu display
        cout << endl << "--- MENU ---" << endl;
        cout << "1. Display sudo log" << endl;
        cout << "2. Display and save SSH log" << endl;
        cout << "3. Exit" << endl;

        // 2. User request
        cout << "Select an option : ";
        cin >> choixUtilisateur;

        // 3. Treatment of choice (SWITCH)
        switch (choixUtilisateur) {
            case 1:
                cout << "You have selected option 1." << endl;
                break; // Stop, we're leaving the switch

            case 2:
                cout << "You have chosen option 2." << endl;
                break; //Stop, we're leaving the switch

            case 3:
                cout << "Sortie du programme..." << endl;
                break; // Stop, we're leaving the switch

            default: // Si ce n'est ni 1, ni 2, ni 3
                cout << "Invalid choice." << endl;
                break;
        } // End of switch

    } while (choixUtilisateur != 3);
    // END OF LOOP (WHILE)
    // “As long as the choice is different from 3, we go back to ‘do’.”

    return 0;
}