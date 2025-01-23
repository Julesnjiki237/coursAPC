#include <stdio.h>
#include <math.h>
int main() {
    int n, i, premier = 1; // Variable 'premier' : 1 si vrai, 0 sinon

    printf("Entrez un entier : ");
    scanf("%d", &n);

    if (n <= 1) {
        premier = 0; // Pas un nombre premier
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                premier = 0;
                break;
            }
        }
    }

    if (premier) {
        printf("%d est un nombre premier.\n", n);
    } else {
        printf("%d n'est pas un nombre premier.\n", n);
    }

    return 0;
}
