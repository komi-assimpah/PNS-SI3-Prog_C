#include <stdio.h>
#include <stdlib.h>


char *my_strcpy(char *dest, const char *src);  // qui vaut à char* my_strcopy c-à-d' que la fonction renvoie un pointeur
size_t my_strlen(const char *s); //size_t est un entier 
char *my_strdup(const char *s); 
char *my_strchr(const char *s, int c);


int main(int argc, char *argv[]){
    //test my_strcpy
    char s[8];
    

    my_strcpy(s, "bonjour");
    printf("%s \n", s);

    printf("%s \n", my_strcpy(s, "bonjour"));


    //test my_strlen
    printf("length = %lu \n", my_strlen(s));
    

    //test my_strdup
    //char r[]= my_strdup("replica"); ==> renverra une erreur d'initialisation
    //printf("%s \n",r);

    char r[]="replica";
    printf("%s \n", my_strdup(r));


    //test my_strchr
    const char *text = "This is a test string.";
    int character_to_find = 's';

    char *result = my_strchr(text, character_to_find);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n", character_to_find, result - text);
    } else {
        printf("Character '%c' not found in the string.\n", character_to_find);
    }

    return 0;
}

char *my_strcpy(char *dest, const char *src){
    char *retour = dest;

    while (*src!='\0')
    {
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';

    return retour;
}

size_t my_strlen(const char *s){
    int i=0;

    while (*s) // <=> while (*s!='\0'); car  '\0' a comme code ascii 0 donc false 
    {
        s++;
        i++;
    }

    return i;

}

char *my_strdup(const char *s){
    //*s designe le 1er caractère, s désigne la chaîne de caractère
    char *aux = malloc((my_strlen(s)+1)*sizeof(char));

    //apres un malloc, vaut mieux utiliser strcopy pour copier dans la mémoire nouvellement alouée
    //il serait également bien de vérifié si la zone a été bien alloué avant de continué
    /*  if (aux == NULL) {
        // Gestion de l'échec de l'allocation
        return NULL;
    }*/

    my_strcpy (aux, s);
    return aux;
}

char *my_strchr(const char *s, int c){
    /*while (*s!='\0'){
        if (*s==c) break;
        s++;
    }
    return s;*/

    /*char *x = (char *) s;
    while (*x != '\0' && *x != c) x ++;
    if (*x) return x;
    return NULL;*/

    //consulter la correction pour ameliorer le code
    
}