#include <stdio.h>

int main() {

    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = 5;

    for (int k = 0; k < taille; k++) {

        int n = nombres[k];
        printf("Nombre : %d\nBinaire : ", n);

        // Pour afficher un entier de 32 bits
        for (int i = 31; i >= 0; i--) {

            // Masque pour tester le bit i
            int masque = 1 << i;

            if (n & masque)
                printf("1");
            else
                printf("0");

            // Juste pour rendre l'affichage plus lisible
            if (i % 4 == 0)
                printf(" ");
        }

        printf("\n\n");
    }

    return 0;
}
