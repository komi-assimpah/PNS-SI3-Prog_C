#include <stdio.h>
#include <string.h>

int my_strcmp(char *s1, char *s2);

int main() {
  // Strings to compare
  char *s1 = "Hello, world !";
  char *s2 = "Hello, world !";
  char *s3 = "Hello, world";
  char *s4 = "Hello, world!";

  // Compare strings
  int result1 = strcmp(s1, s2);
  int result2 = strcmp(s1, s3);
  int result3 = strcmp(s3, s4);

  // Print results
  printf("strcmp(s1, s2) = %d\n", result1);
  printf("strcmp(s1, s3) = %d\n", result2);
  printf("strcmp(s3, s4) = %d\n", result3);

  return 0;
}

int my_strcmp(char *s1, char *s2)
{
    for (; *s1 == *s2; s1++, s2++)
        return 0;
    return *s1 - *s2;
}