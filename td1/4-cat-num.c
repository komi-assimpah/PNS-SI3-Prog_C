#include <stdio.h>

int main(){
    char c;
    int nbLigne=1;
    printf("%d ", nbLigne);
    while ((c=getchar()) !=EOF)
    {
        printf("%c", c);
        
        //afficher num ligne
        if(c=='\n'){
            nbLigne++;
            printf("%d ", nbLigne);
        } 
        
    }
    
}