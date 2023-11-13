#include <stdio.h>

// Function prototypes
int plus(int op1, int op2);
int minus(int op1, int op2);

int main() {
  // Variables
  int a, b, result;
  int (*operationPointer)(int, int);

  // Input
  printf("Veuillez entrer l'opérateur (+ ou -) : ");
  char operation;
  scanf(" %c", &operation); // L'espace avant %c permet d'ignorer les espaces ou les retours à la ligne.

  if (operation != '+' && operation != '-') {
    printf("Opérateur invalide. Veuillez entrer '+' ou '-'.\n");
    return 1; // Quitte le programme avec un code d'erreur
  }

  printf("Veuillez entrer deux opérandes : ");
  scanf("%d %d", &a, &b);

  // Sélection de l'opération
  switch (operation) {
    case '+':
      operationPointer = plus;
      break;
    case '-':
      operationPointer = minus;
      break;
  }

  // Calcul du résultat
  result = operationPointer(a, b);

  // Affichage du résultat
  printf("Résultat : %d\n", result);

  return 0;
}

// Définition des fonctions
int plus(int op1, int op2) { return op1 + op2; }
int minus(int op1, int op2) { return op1 - op2; }
