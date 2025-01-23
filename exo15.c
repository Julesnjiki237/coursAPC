#include <stdio.h>
int main() {
    int a, b, somme;
    int *p1 = &a, *p2 = &b;

    printf("Entrez deux entiers : ");
    scanf("%d %d", p1, p2);

    somme = *p1 + *p2;
    printf("Somme : %d\n", somme);

    return 0;
}
