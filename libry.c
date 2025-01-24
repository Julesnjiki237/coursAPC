#include <stdio.h>
#include <stdlib.h>
#include "libry.h"

// D�finition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// D�finition d'une fonction d'�l�vation � une puissance donn�es.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}

void bonjour(){
printf("Bonjour \n");
}

int inverse_entier( int n){
    int inverse, centaine, dizaine, unite ;

    if(n >= 100 && n<= 999){
        centaine = n/100;
        dizaine = (n/10)%10;
        unite = n%10;

        inverse = unite*100 + dizaine*10 + centaine;
        printf("Le nombre inversé est: %d", inverse);
    } else{
    printf("Veuillez entrer un entier constituer de 3 chiffres");
    }
};

float produit_reel(){

float x, y, produit;

printf("Entrez les valeurs de deux réels_\n");
scanf(" %f %f", &x,&y);

produit = x*y;

return produit;

}

void parite(int n){
    if (n%2 == 0){
        printf("l'entier %d est Pair\n", n);
    } else
    printf("l'entier %d est Impair\n", n);
}

void comparaison_entier(int a, int b){

    printf("comparaison de %d et %d\n", a,b);
    if (a == b){
        printf("%d = %d", a,b);
        }else if(a>b){
          printf("%d > %d", a,b);
        }
        else{ printf("%d < %d", a,b);
    }

}

void ordre_croissant(){

    int a, b,c, temp;

    printf("entrez les valeurs de a, b et c \n");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b){ temp = a; a = b;   b= temp;}
    if(a>c) {temp = a ; a=c;   c= temp; }
    if(b>c){temp = b; b= c; c = temp;}


    printf("Les entiers triés par ordre croissant sont %d %d %d \n:",a, b, c);
}

void permutation_char(char* a, char* b){

char temp = *a;
*a = *b;
*b = temp;

printf("a= %c , b= %c\n", *a, *b);
}


int somme(int a, int b){

    int somme = 0;

    somme = a + b;

    return somme;
}
