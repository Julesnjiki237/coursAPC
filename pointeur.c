#include <stdio.h>
#include <stdlib.h>

/*
 * Une fonction de permutation de ses paramètres.
 */
void swap( int* first, int* second ) {

    printf( "first==%d, second==%d\n", *first, *second );    // Résultat: first==10, second==20
    int temp = &first;
    first = &second;
    second = temp;
    printf( "first==%d, second==%d\n", *first, *second );    // Résultat: first==20, second==10

}


/*
 * Fonction main : le point d'entrée de votre programme.
 */
int main() {

    int a = 10;
    int b = 20;

    swap( &a, &b );
    printf( "a==%d, b==%d\n", a, b );        // Résultat: a==10, b==20

    return EXIT_SUCCESS;

}
