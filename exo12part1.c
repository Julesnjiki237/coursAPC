#include <stdio.h>
#include <string.h>
int main() {
    char chaine1[100], chaine2[100];

    printf("Entrez la premi�re cha�ne : ");
    scanf("%s", chaine1);
    printf("Entrez la deuxi�me cha�ne : ");
    scanf("%s", chaine2);

    if (strcmp(chaine1, chaine2) < 0) {
        printf("%s\n%s\n", chaine1, chaine2);
    } else {
        printf("%s\n%s\n", chaine2, chaine1);
    }

    return 0;
}
