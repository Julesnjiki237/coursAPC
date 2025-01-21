#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

/*
 * Fonction main : le point d'entrée de votre programme.
 */
int main() {

    // Un tableau est un pointeur
    int  tb[] = { 10, 20, 30 };

    // On affiche tous les éléments du tableau
    for( int i=0; i<SIZE; i++ ) {
        printf( "%d ", *(tb+i) );
    }
    printf( "\n" );
    
    // On modifie la valeur du second élément du tableau
    *(tb+1) = 100;

    // On affiche de nouveau le tableau
    for( int i=0; i<SIZE; i++ ) {
        printf( "%d ", *(tb+i) );
    }
    printf( "\n" );

    return EXIT_SUCCESS;

}