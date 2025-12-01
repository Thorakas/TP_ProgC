#include <stdio.h>

int main() {
    int d = 0x10001000;  // Exemple : mets ici n’importe quelle valeur

    // Calcul des positions des bits (4e et 20e bits depuis la gauche)
    int bit4_pos = 31 - (4 - 1);   // = 28
    int bit20_pos = 31 - (20 - 1); // = 12

    // Extraction des bits
    int bit4 = (d >> bit4_pos) & 1;
    int bit20 = (d >> bit20_pos) & 1;

    // Vérification si les deux bits sont à 1
    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("Resultat : %d\n", resultat);

    return 0;
}
