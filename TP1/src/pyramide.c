
#include <stdio.h>

int main() {
    int n = 5;   // hauteur de la pyramide
    int i, j;

    printf("Generation d'une pyramide de hauteur %d :\n\n", n);

    // Boucle principale : chaque niveau de 1 à n
    for (i = 1; i <= n; i++) {

        // 1) Afficher les espaces pour centrer la pyramide
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Afficher les nombres croissants (1, 2, ..., i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Afficher les nombres décroissants (i-1, ..., 2, 1)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passer à la ligne suivante
        printf("\n");
    }

    printf("\nPyramide generee avec succes !\n");

    return 0;
}
