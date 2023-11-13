#include <stdio.h>
#include <string.h>

int indice(const char str[], const char c);
int indice_droite(const char str[], const char c);

int main(){
    /*Test de la fonction "indice"  */
    printf("\t Test de la fonction indice\n");
    printf("indice : %d \n", indice("Test", 'T'));
    printf("indice : %d\n", indice("Test", 't'));
    printf("indice : %d\n", indice("Test", 'z'));
    printf("indice : %d\n", indice("Tester", 'e'));


    /*Test de la fonction "indice_droite"  */
    printf("\t Test de la fonction indice_droite\n");
    printf("indice : %d\n", indice_droite("Test", 'T'));
    printf("indice : %d\n", indice_droite("Test", 't'));
    printf("indice : %d\n", indice_droite("Test", 'z'));
    printf("indice : %d\n", indice_droite("Tester", 'e'));
}

int indice(const char str[], const char c){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==c){
            return i;
        }
    }
    return -1;
}

int indice_droite(const char str[], const char c){
    for(int i=strlen(str)-1; 0<=i; i--){
        if(str[i]==c){
            return i;
        }
    }
    return -1;
}