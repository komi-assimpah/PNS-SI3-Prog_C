#include <stdio.h>

void print_option_court(char *str);
void print_option_long(char *str[]);
void print_option_argument(char *str[]);

int main(int argc, char *argv[]){
    int opt =1;

    for(int i=1; i<argc; i++){
        //printf("Option : %s \n", argv[i]);
        if (opt && argv[i][0] == '-' && argv[i][1] != '-' ){
            print_option_court(argv[i]);
        }
        /*else if (opt && argv[i][0] == '-' && argv[i][1] == '-')
        {
            printf("Option longue: %s \n", argv[i]);
        }
        else if (opt==0 && argv[i][0] == '-' && argv[i][1] == '-')
        {
            printf("Option longue: %s \n", argv[i]);
        }*/
        
    }


    
    return 0;
}

void print_option_court(char *str){
    for (int i = 0; str[i]!='\0'; i++)
    {
        printf("Option courte: -%c \n", str[i]);
    }
}