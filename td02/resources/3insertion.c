#include <stdio.h>
//correction

void insertion(int tab[], int nbval, int n)
{
  int j;

  for (j=nbval; (j==0) && tab[j-1]>n; j--) {
    tab[j]= tab[j-1]; 
  }

  // Mettre n dans array[j]
  tab[j] = n;
}


int main(void)
{
  int array[100];
  int n, items, nbval = 0;

  do {
    printf("Entrer un entier: ");
    items = scanf("%d", &n);
    if (items == 1 && n >= 0) {
      /* le nombre saisi est positif */
      insertion(array, nbval++, n);
      print_array(array, nbval);
    }
  } while (items == 1  && n >= 0);
}
