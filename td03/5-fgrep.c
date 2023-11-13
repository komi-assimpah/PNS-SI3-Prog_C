#include <stdio.h>

int my_strstr(char a[], char b[]);

int main(int argc, char *argv[]){
    char a[] = "Hello, World!";
    char b[] = "World";
    printf("Recherche de '%s' dans '%s': %d\n", b, a, my_strstr(a, b));

    char x[] = "Bonjour le monde";
    char y[] = "au";
    printf("Recherche de '%s' dans '%s': %d\n", y, x, my_strstr(x, y));

    char m[] = "abcdefg";
    char n[] = "xyz";
    printf("Recherche de '%s' dans '%s': %s\n", n, m, my_strstr(m, n) ? "Trouvé" : "Non trouvé");

    return 0;

}

int my_strstr(char a[], char b[]){
    /**
     * i parcours a tout au long de 1er for
     * u parcours b
     * s parcours b en checkant la position actuelle de i au debut (si les 1ers carac de a et b sont ==,  s check le 1er carac suivant, puis le 2nd ...)
     *    ce que ne serait pas possible avec i (à moins que qu'on ne fasse i++ à chaque fois) et si on arrive à un point où a[i]!= b[u] i serait envoyé trop loin
    */
    int i, u, s;
    for(i=0; a[i]!='\0'; i++){
        for(u=0, s=i; b[u]!='\0'; u++, s++){
            if(b[u]!=a[s]) break;
        }
        //cf note *obsidian* si besoin d'explication ici
        if(b[u]=='\0') return 1; // Si on est arrivé au bout de b
    }
      // Si on est là, c'est qu'on a pas trouvé b dans a
    return 0;
}