#include <stdio.h>

int main() {
    int compteur = 5;

    if (compteur <= 10) {
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            // Début et fin en '*'
            if (j == 1 || j == i) {
                printf("* ");
            }
            else {
                printf("# ");
            }
        }
        printf("\n");
    }
    }

    else {
        printf("merci de saisir une valeur inférieur ou égal à 10");
            }
    return 0;
}



