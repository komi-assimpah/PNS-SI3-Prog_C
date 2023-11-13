#include <stdio.h>

int main(){
    int n;
    int nbPos=0;

    printf("Entrez un entier : ");
    scanf("%d", &n);
    while(n>0){
        nbPos++;
        printf("Entrez un entier : ");
        scanf("%d", &n);
    }
    printf("Nb d'entiers saisis = %d \n", nbPos);

    
    return 0;
}