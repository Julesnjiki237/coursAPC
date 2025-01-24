#include <stdio.h>
#include <stdlib.h>
#include "libry.h"

int main(void) {
    int choix;
    int a, b, c, n;
    float x, y;
    char char1, char2;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Calcul de la factorielle\n");
        printf("2. Elevation a une puissance\n");
        printf("3. Dire bonjour\n");
        printf("4. Inverser un entier a 3 chiffres\n");
        printf("5. Produit de deux reels\n");
        printf("6. Parite d'un entier\n");
        printf("7. Comparer deux entiers\n");
        printf("8. Trier trois entiers dans l'ordre croissant\n");
        printf("9. Permuter deux caracteres\n");
        printf("10. Somme de deux entiers\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: // Calcul de la factorielle
                printf("Entrez un entier : ");
                scanf("%d", &n);
                printf("La factorielle de %d est : %u\n", n, fact(n));
                break;

            case 2: // �l�vation � une puissance
                printf("Entrez une base et une puissance : ");
                scanf("%d %d", &a, &b);
                printf("%d^%d = %d\n", a, b, power(a, b));
                break;

            case 3: // Dire bonjour
                bonjour();
                break;

            case 4: // Inverser un entier
                printf("Entrez un entier a 3 chiffres : ");
                scanf("%d", &n);
                inverse_entier(n);
                printf("\n");
                break;

            case 5: // Produit de deux r�els
                printf("Le produit des deux reels est : %.3f\n", produit_reel());
                break;

            case 6: // Parit� d'un entier
                printf("Entrez un entier : ");
                scanf("%d", &n);
                parite(n);
                break;

            case 7: // Comparer deux entiers
                printf("Entrez deux entiers : ");
                scanf("%d %d", &a, &b);
                comparaison_entier(a, b);
                printf("\n");
                break;

            case 8: // Trier trois entiers dans l'ordre croissant
                ordre_croissant();
                break;

            case 9: // Permuter deux caract�res
                printf("Entrez deux caracteres : ");
                scanf(" %c %c", &char1, &char2);
                permutation_char(&char1, &char2);
                break;

            case 10: // Somme de deux entiers
                printf("Entrez deux entiers : ");
                scanf("%d %d", &a, &b);
                printf("La somme de %d et %d est : %d\n", a, b, somme(a, b));
                break;

            case 0: // Quitter
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide, veuillez reessayer.\n");
                break;
        }
    } while (choix != 0);

    return EXIT_SUCCESS;
}
