#include <stdio.h>
int main() {
    char chaine1[100], chaine2[100];
    int i = 0;

    printf("Entrez la première chaîne : ");
    scanf("%s", chaine1);
    printf("Entrez la deuxième chaîne : ");
    scanf("%s", chaine2);

    while (chaine1[i] == chaine2[i] && chaine1[i] != '\0' && chaine2[i] != '\0') {
        i++;
    }

    if (chaine1[i] < chaine2[i]) {
        printf("%s\n%s\n", chaine1, chaine2);
    } else {
        printf("%s\n%s\n", chaine2, chaine1);
    }

    return 0;
}
