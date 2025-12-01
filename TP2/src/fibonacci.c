#include <stdio.h>

int main() {
    int n;

    // Saisie du nombre de termes
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Veuillez entrer un nombre positif.\n");
        return 1;
    }

    // Les deux premiers termes
    int u0 = 0, u1 = 1;

    printf("Suite de Fibonacci jusqu'au terme %d :\n", n);
    
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d", u0);
        } else if (i == 1) {
            printf(", %d", u1);
        } else {
            int un = u0 + u1;
            printf(", %d", un);
            u0 = u1;
            u1 = un;
        }
    }

    printf("\n");

    return 0;
}
