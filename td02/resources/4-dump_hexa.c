#include <stdio.h>
#define MAXCHAR 16

void imprimer(char ligne[], int nb){
  int j;
  for(j=0; j<MAXCHAR; j++){
    if(j<nb){
      printf("%02x ", (unsigned char) ligne[j]);
    }else{
      printf("   ");
    }
  }
  printf(" | ");

  for(j=0; j<nb; j++){
    char c=ligne[j];
    
    printf("%c", (' ' <= c && c <= '~') ? c: '.');
  }
  printf("\n");
}

int main(){
  int c;
  int i=0;
  char ligne[MAXCHAR];
  
  while ((c=getchar())!=EOF){
    ligne[i]=c;
    i++;
    if(i==MAXCHAR){
      imprimer(ligne, i);
      i=0;
    }
  }
  if(i!=0) imprimer (ligne, i);

  return 0;

}