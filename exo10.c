#include <stdio.h>
int main() {
    int n, i, x, j;

    printf("Entrez le nombre d'�l�ments : ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez %d entiers :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    printf("Entrez le nombre � supprimer : ");
    scanf("%d", &x);

    printf("Tableau apr�s suppression :\n");
    for (i = 0; i < n; i++) {
        if (tableau[i] != x) {
            printf("%d ", tableau[i]);
        }
    }
    printf("\n");

    return 0;
}
