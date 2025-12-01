#include <stdio.h>

int main() {
    char chaine1[100], chaine2[100];
    char copie[100], concatenation[200];
    int i, j;

    // 1️⃣ Saisie des chaînes par l'utilisateur
    printf("Entrez la première chaîne : ");
    scanf("%[^\n]%*c", chaine1);  // lire jusqu'au retour à la ligne

    printf("Entrez la deuxième chaîne : ");
    scanf("%[^\n]%*c", chaine2);

    // 2️⃣ Calculer la longueur de chaine1
    i = 0;
    while (chaine1[i] != '\0') {
        i++;
    }
    int longueur1 = i;

    // 3️⃣ Copier chaine1 dans copie
    i = 0;
    while (chaine1[i] != '\0') {
        copie[i] = chaine1[i];
        i++;
    }
    copie[i] = '\0'; // terminer la chaîne

    // 4️⃣ Concaténer chaine1 et chaine2 dans concatenation
    i = 0;
    // Copier chaine1 dans concatenation
    while (chaine1[i] != '\0') {
        concatenation[i] = chaine1[i];
        i++;
    }
    // Ajouter chaine2 à la suite
    j = 0;
    while (chaine2[j] != '\0') {
        concatenation[i] = chaine2[j];
        i++;
        j++;
    }
    concatenation[i] = '\0'; // terminer la chaîne

    // 5️⃣ Affichage des résultats
    printf("\nChaine 1 : %s\n", chaine1);
    printf("Chaine 2 : %s\n", chaine2);
    printf("Longueur de la chaine 1 : %d\n", longueur1);
    printf("Copie de la chaine 1 : %s\n", copie);
    printf("Concatenation : %s\n", concatenation);

    return 0;
}
