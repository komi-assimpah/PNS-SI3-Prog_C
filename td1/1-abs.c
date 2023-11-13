#include <stdio.h>

int main(){
    int abs=0;
    int i=0;

    printf("Entrez la valeur voulez-vous trouvez sa valeur absolue : ");

    scanf("%d", &i);
    if(i<0 || i>=0){
        if(i>=0){
            abs=i;
        }else{
            abs=-i;
        }
        printf("|%d| = %d \n", i, abs);
    }else{
        //ne fonctionnera pas car il faudrait faire un contrôle de la variable char->int 

        //amelioration : -cas où rien n'est saisi
        printf("erreur de saisie");
    }
    


    return 0;
}