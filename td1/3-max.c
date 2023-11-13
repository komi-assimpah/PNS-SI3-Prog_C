#include <stdio.h>

int main(){
    int n;
    int nbPos=0;
    int max=-1;
    int somme=0;

    printf("Entrez un entier : ");
    scanf("%d", &n);

    while(n>0){
        nbPos++;
        max=n;
        somme=somme+n;
        if (n>max) max=n;
        printf("Entrez un entier : ");
        scanf("%d", &n);


    }
    printf("Nb d'entiers saisis = %d \n", nbPos);
    printf("MAX = %d \n", max);
    printf("somme = %d \n", somme);
    
    return 0;
}