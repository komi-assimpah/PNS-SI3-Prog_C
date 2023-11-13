#include <stdio.h>
#include <string.h>

int palindrome(const char str[]);

int main(){
    printf("%d \n", palindrome("ressasser"));
    printf("%d \n", palindrome("kayak"));
    printf("%d \n", palindrome("X"));
    printf("%d \n",palindrome("test") );
}

int palindrome(const char str[]){
    int i=0, j=strlen(str)-1;
    for(i,j; i<j; i++, j--){
        if(str[i]!=str[j]){
            return 0;
        }
    }
    return 1;
}