#include <stdio.h>
#include <string.h>


void print_option_court(char *str);
void print_option_long(char *str[]);
void print_option_argument(char *str[]);

int main(int argc, char *argv[]){
    int opt =1;

    // à améliorer pour obtenir caractère par caractère
    for(int i=1; i<argc; i++){
        if(argv[i][0] == '-' && argv[i][1]=='-' && argv[i][2]=='\0'){
            if(opt==1){
                printf(" opt passe à 0 \n");
                opt =0;
                i++;
            }
            //printf("Argument : %s \n", argv[i]);
        } 

        //printf("Option : %s \n", argv[i]);
        if (opt==1 && argv[i][0] == '-' && argv[i][1]!='-'){
            printf("Option courte : %s \n", argv[i]);
        }
        else if (opt==1 && argv[i][0] == '-' && argv[i][1]=='-'){
            printf("Option longue : %s \n", argv[i]);
        }
        else if(opt == 0){
            printf("Argument : %s \n", argv[i]);
        }



        
    }


    
    return 0;
}
