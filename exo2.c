
#include <stdio.h>
int main() {
    int n, inverser = 0;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    while (n != 0) {
        inverser = inverser * 10 + n % 10;
        n /= 10;
    }
    printf("Inverse : %d\n", inverser);
    return 0;
}
