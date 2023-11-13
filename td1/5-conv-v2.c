# include <stdio.h>
#include <math.h>

int main(){

/*
  cast
    Un cast permet de changer le type d’une expression. Par exemple
	
    (int) 3.2     // résultat l'entier 3
	
    permet de considérer la valeur flottante 3.2 comme un entier (ici le résulta sera 3). 

fonction rint
    la fonction rint permet d’arrondir (et non pas tronquer comme le cast) un nombre 
	flottant. Le résultat est lui même un nombre floattant:

    rint(3.2)     // résultat le floattant 3.0

    Noter que pour utiliser rint, il faut faire l’édition de lien avec la bibliothèque 
	mathématique (option -lm). La compilation du fichier peut donc se faire avec:

    $ gcc -Wall -std=c99 -o 5-conv 5-conv.c -lm
*/

    float c;
    //float f ;

    printf("---------------Avec le cast en int -----------\n");
    printf("+-------+--------+ \n");
    for (c = 0.0; c <= 20.0; c += 0.5){
      //on affiche alors c sur 5 caractères avec 2 chiffre après la virguele (le . occupe aussi de l'espace)
      printf("| %5.2fC| %5.2dF |\n", c, (int) (9*c)/5 + 32);
    }
    printf("+-------+--------+ \n");
    printf("\n");
    printf("\n");


    printf("---------------Avec rint -----------\n");
    printf("+-------+--------+ \n");
    for (c = 0.0; c <= 20.0; c += 0.5){
      //on affiche alors c sur 5 caractères avec 2 chiffre après la virguele (le . occupe aussi de l'espace)
      printf("| %5.2fC| %4.2fF |\n", c, rint((9*c)/5 + 32) );
    }
    printf("+-------+--------+ \n");
      
  return 0;
}