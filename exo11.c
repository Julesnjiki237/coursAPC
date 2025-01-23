#include <stdio.h>
#include <string.h>
int main() {
    char chaine[100];
    int i, n, palindrome = 1;

    printf("Entrez une cha�ne : ");
    scanf("%s", chaine);

    n = strlen(chaine);
    for (i = 0; i < n / 2; i++) {
        if (chaine[i] != chaine[n - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome) {
        printf("La cha�ne est un palindrome.\n");
    } else {
        printf("La cha�ne n'est pas un palindrome.\n");
    }

    return 0;
}
