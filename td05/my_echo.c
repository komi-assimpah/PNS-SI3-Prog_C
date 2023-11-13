#include <stdio.h>
#include <string.h>

void *mirror(int length, char *s);

int main(int argc, char *argv[]){
    
    //code à améliorer pour afficher les parametre renversé au cas où -r n'est pas le 1er param : ./my_echo abc def -r ghi
    if(strcmp(argv[1], "-r")==0){
        for(int i=2; i<argc; i++){
            mirror(strlen(argv[i]) ,argv[i]);
            puts(argv[i]);
        }
    }
    else for(int i=1; i<argc; i++) puts (argv[i]);
    return 0;
}

void *mirror(int length, char *s){
    int back=length-1;
    for(int i=0; i!=length/2; i++, back--){
        char temp = *(s+i);
        *(s+i)=*(s+back);
        *(s+back)=temp;
        //ou
        /*
        char temp = s[i];
        s[i] = s[back];
        s[back] = temp;

        car au final une chaine de caractères, c'est une suite de case mémoire
        */
    }

}