#include <stdio.h>

int main() {

    int num1 = 12;
    int num2 = 4;
    char op = '*';   // modifier si besoin avec les caracteres suivant : + - * / % & | ~

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
            resultat = num1 & num2;  // Opération ET bit-à-bit
            printf("%d & %d = %d\n", num1, num2, resultat);
            break;

        case '|':
            resultat = num1 | num2;  // Opération OU bit-à-bit
            printf("%d | %d = %d\n", num1, num2, resultat);
            break;

        case '~':
            // L’opérateur ~ ne prend qu’un seul opérande
            resultat = ~num1;
            printf("~%d = %d\n", num1, resultat);
            break;

        default:
            printf("Erreur : operateur '%c' inconnu\n", op);
    }

    return 0;
}


