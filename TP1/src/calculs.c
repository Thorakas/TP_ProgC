#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Saisie des valeurs
    printf("Entrez un premier nombre entier : ");
    scanf("%d", &num1);

    printf("Entrez un deuxieme nombre entier : ");
    scanf("%d", &num2);

    printf("Entrez un operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);   
    // Le espace avant %c permet d'ignorer les retours à la ligne restants

    int resultat;

    switch (op) {

        case '+':
            resultat = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, resultat);
            break;

        case '-':
            resultat = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, resultat);
            break;

        case '*':
            resultat = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, resultat);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erreur : division par zero !\n");
            } else {
                resultat = num1 / num2;
                printf("%d / %d = %d\n", num1, num2, resultat);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zero !\n");
            } else {
                resultat = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, resultat);
            }
            break;

        case '&':
            resultat = num1 & num2;
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            resultat = ~num1;     // s'applique seulement au premier nombre
            printf("~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Erreur : operateur '%c' inconnu\n", op);
    }

    return 0;
}
