#include <stdio.h>

int main() {

  int a = 16;
  int b = 3;

printf("addition = %d\n", a + b);
printf("soustraction = %d\n", a - b);
printf("multiplication = %d\n", a * b);
printf("division = %d\n", a / b);      // Division entière
printf("modulo = %d\n", a % b);     // %% pour afficher %

    // Opérateurs logiques / de comparaison
printf("A est strictement égal à B : %d\n", (a == b));  // Egalité
printf("A est supérieur à B  : %d\n", (a > b));   // Supérieur

    return 0;
}
