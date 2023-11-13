#include <stdio.h>

void suppress_char(char str[], char c);
int main(){
    char str[]="aloha";
    suppress_char(str, 'a');
    printf("%s \n", str);

    char str1[] = "Hello, World!";
    char c1 = 'l';
    printf("Original: %s\n", str1);
    suppress_char(str1, c1);
    printf("After removing '%c': %s\n", c1, str1);

    char str2[] = "This is a test string.";
    char c2 = ' ';
    printf("Original: %s\n", str2);
    suppress_char(str2, c2);
    printf("After removing '%c': %s\n", c2, str2);

    char str3[] = "No changes needed.";
    char c3 = 'x';
    printf("Original: %s\n", str3);
    suppress_char(str3, c3);
    printf("After removing '%c': %s\n", c3, str3);

}
void suppress_char(char str[], char c){
    int writer=0;
    int sprinter;
    for (sprinter = 0; str[sprinter]!='\0'; sprinter++){
        if(str[sprinter]!=c){
            str[writer]=str[sprinter];
            writer++;
        }
    }
    str[writer]='\0';
}