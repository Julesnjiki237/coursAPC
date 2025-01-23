#include <stdio.h>
void permuter(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &x, &y);

    permuter(&x, &y);

    printf("Après permutation : x = %d, y = %d\n", x, y);
    return 0;
}
