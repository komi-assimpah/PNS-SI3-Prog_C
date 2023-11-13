#include <stdio.h>
#include <stdarg.h>

void cat_strings(char str1[], ...);

int main(){
    cat_strings("a", "b", "c", NULL);
    cat_strings("es", "ssai", NULL);
    cat_strings("you ", "pi"," ", "ya", NULL);

}

void cat_strings(char str1[], ...){
    va_list ap;

    va_start(ap, str1);

    //'char *' pointe vers le valeur d'un pointeur, donc pour recupérer cette valeur notre str doit-être déclarer comme char *
    //str1=va_arg(ap, char *);
    //printf("%s", str1);

    while (str1!= NULL){
        printf("%s", str1);
        str1=va_arg(ap, char *);
    }
    printf("\n");
    va_end(ap);
    
}