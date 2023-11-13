# include <stdio.h>

int main(){
    float c;
    float f ;

    printf("+-------+--------+ \n");

    for (c = 0.0; c <= 20.0; c += 0.5){
      //on affiche alors c sur 5 caractères avec 2 chiffre après la virguele (le . occupe aussi de l'espace)
      printf("| %5.2fC| %4.2fF |\n", c, f= (9*c)/5 + 32);
    }

  return 0;
}