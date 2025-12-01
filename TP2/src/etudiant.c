#include <stdio.h>

int main() {
    // 1️⃣ Tableaux pour les noms, prénoms et adresses
    char noms[5][20] = {"Dupont", "Martin", "Nguyen", "Moreau", "Petit"};
    char prenoms[5][20] = {"Alice", "Bob", "Chloe", "David", "Emma"};
    char adresses[5][50] = {
        "12 rue de Paris",
        "34 avenue Victor Hugo",
        "56 boulevard Saint-Michel",
        "78 rue Lafayette",
        "90 avenue de la Republique"
    };

    // 2️⃣ Tableaux pour les notes des deux modules
    float notes_prog[5] = {15.5, 12.0, 17.0, 14.5, 16.0};
    float notes_sys[5] = {14.0, 13.5, 16.0, 12.5, 15.0};

    // 3️⃣ Affichage des informations des étudiants
    printf("Liste des etudiants :\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation en C : %.1f\n", notes_prog[i]);
        printf("Note Systeme d'exploitation : %.1f\n\n", notes_sys[i]);
    }

    return 0;
}
