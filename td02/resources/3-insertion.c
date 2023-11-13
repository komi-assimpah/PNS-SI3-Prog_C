#include <stdio.h>



void insertion(int tab[], int tab_len, int to_insert){

    // j'insere la nouvelle valeur à la fin du tableau, puis je trie le tableau
    tab[tab_len]=to_insert;


    // puis je trie le tableau
    int i, j;
    int tmp;
    for(int i=0; i<=tab_len; i++){
        for(int j=i+1; j<=tab_len; j++){
            if(tab[i]>tab[j]){
                tmp=tab[i];
                tab[i]=tab[j];
                tab[j]=tmp;
            }
        }
    }
}


int main(){
    int table[]={4,5,3,1,0};
    int tab_length=5;

    insertion(table, tab_length, 2);
    
    for(int i=0; i<6;i++){
        printf("%d \n", table[i]);
    }

    return 0;
}