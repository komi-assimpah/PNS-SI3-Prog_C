#include <stdio.h>

int main(){
    //TJRS INITIALISER LE TABLE 
    int alpahetJusqu10[36] = {};
    char c;

    while ( (c=getchar() )!=EOF)
    {
        //on se base sur le code ASCII pour écrire le code en tenant compte de la casse
        if( 'A'<= c && c<= 'Z'){
            alpahetJusqu10[c-'A']++;
        }else {
            //apres 'Z' on a : XYZ01...9
            alpahetJusqu10[c+26]++;
        }
    }

    //affichage du nb d'occurence
    for(int i=0; i<26; i++){
        printf("%c : %d fois\n", 'A'+i, alpahetJusqu10[i]);
    }

    for(int u=0; u<10; u++){
        printf("%c : %d fois\n", '0'+u, alpahetJusqu10[26+u]);
    }

    return 0;
}