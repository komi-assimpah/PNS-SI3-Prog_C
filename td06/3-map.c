#include <stdio.h>


int map(int fct(int i) , int t[], int n);


//coder l'affichage
int main(int argc, char *argv[]){
    
    return 0;
}
int map(int fct(int i) , int t[], int n){
  for (int i = 0; i < n; i++){
    t[i] = fct(t[i]);
  }
}

int carre(int i){
    return i*i;
} 