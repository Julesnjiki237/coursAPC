#include <stdio.h>
int main() {
    int n, i, somme = 0, max, min;

    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    int tableau[n];
    printf("Entrez %d entiers :\n", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
        somme += tableau[i];
        if (i == 0) {
            max = min = tableau[i];
        } else {
            if (tableau[i] > max) max = tableau[i];
            if (tableau[i] < min) min = tableau[i];
        }
    }

    printf("Somme : %d, Max : %d, Min : %d\n", somme, max, min);
    return 0;
}

