#include <stdio.h>
int main() {
    int nombreMagique = 42; // Le nombre secret
    int tentative;

    do {
        printf("Devinez le nombre magique : ");
        scanf("%d", &tentative);
        if (tentative < nombreMagique) {
            printf("C'est plus grand.\n");
        } else if (tentative > nombreMagique) {
            printf("C'est plus petit.\n");
        }
    } while (tentative != nombreMagique);

    printf("Bravo, vous avez trouvé le nombre magique !\n");
    return 0;
}
