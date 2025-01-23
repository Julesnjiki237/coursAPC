#include <stdio.h>
typedef struct {
    char nom[50];
    char prenom[50];
    float note;
} Etudiant;

int main() {
    int n, i;
    printf("Entrez le nombre d'étudiants : ");
    scanf("%d", &n);

    Etudiant etudiants[n];
    for (i = 0; i < n; i++) {
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        printf("Note : ");
        scanf("%f", &etudiants[i].note);
    }

    printf("Étudiants ayant une note >= 10 :\n");
    for (i = 0; i < n; i++) {
        if (etudiants[i].note >= 10) {
            printf("%s %s (%.2f)\n", etudiants[i].prenom, etudiants[i].nom, etudiants[i].note);
        }
    }

    return 0;
}
