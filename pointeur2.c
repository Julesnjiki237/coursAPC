#include <stdio.h>
#include <stdlib.h>

void function( const int * value ) {

    printf( "%d\n", *value ); // Can read
    *value = 0;   // Cannot write. Content of value cannot be writed.

}


/*
 * Fonction main : le point d'entrée de votre programme.
 */
int main() {

    int a = 10;
    function( &a );

    return EXIT_SUCCESS;

}