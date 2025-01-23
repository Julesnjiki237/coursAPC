#include <stdio.h>
int Somme(int a, int b) {
    return a + b;
}

int main() {
    int x, y;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &x, &y);

    printf("Somme : %d\n", Somme(x, y));
    return 0;
}
