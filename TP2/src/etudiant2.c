#include <stdio.h>
#include <string.h>  // pour strcpy

// 1️⃣ Définition de la structure étudiant
typedef struct {
    char nom[30];
    char prenom[30];
    char adresse[100];
    float note_prog;   // note Programmation en C
    float note_sys;    // note Système d'exploitation
} Etudiant;

int main() {
    Etudiant etudiants[5];  // tableau de 5 étudiants

    // 2️⃣ Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Alice");
    strcpy(etudiants[0].adresse, "12 rue de Paris");
    etudiants[0].note_prog = 15.5;
    etudiants[0].note_sys = 14.0;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Bob");
    strcpy(etudiants[1].adresse, "34 avenue Victor Hugo");
    etudiants[1].note_prog = 12.0;
    etudiants[1].note_sys = 13.5;

    strcpy(etudiants[2].nom, "Nguyen");
    strcpy(etudiants[2].prenom, "Chloe");
    strcpy(etudiants[2].adresse, "56 boulevard Saint-Michel");
    etudiants[2].note_prog = 17.0;
    etudiants[2].note_sys = 16.0;

    strcpy(etudiants[3].nom, "Moreau");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "78 rue Lafayette");
    etudiants[3].note_prog = 14.5;
    etudiants[3].note_sys = 12.5;

    strcpy(etudiants[4].nom, "Petit");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "90 avenue de la Republique");
    etudiants[4].note_prog = 16.0;
    etudiants[4].note_sys = 15.0;

    // 3️⃣ Affichage des informations
    printf("Liste des étudiants :\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation en C : %.1f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.1f\n\n", etudiants[i].note_sys);
    }

    return 0;
}
