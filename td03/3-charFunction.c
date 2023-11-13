#include <stdio.h>
#include <string.h>

void my_strcpy(char s1[], char s2[]);
int my_strcmp(char s1[], char s2[]);
void my_strupper(char s[]);

int main(){

    /*
    //===test my_strcpy===
    char str[10];
    printf("===test my_strcpy=== \n");
    my_strcpy(str, "cou");
    printf("%s, %ld \n", str, strlen(str));*


    //===test my_strcmp===
    printf("%d \n",my_strcmp("abc","z") );
    printf("%d \n",my_strcmp("abc","abd") );
    printf("%d \n", my_strcmp("trié", "triée"));
    printf("%d \n",my_strcmp("z", "abc") );
    printf("%d \n",my_strcmp("abcd", "abc") );
    printf("%d \n", my_strcmp("abc", "abc"));
    printf("%d \n", my_strcmp("trie", "triea"));
    printf("%d \n", my_strcmp("trie", "z"));
    */

   //===test my_strupper===
    char str[]="ali056";
    my_strupper(str);
    printf("%s \n", str);

    char test1[] = "hello";
    my_strupper(test1);
    printf("Test 1: %s\n", test1); // Devrait afficher "HELLO"

    char test2[] = "";
    my_strupper(test2);
    printf("Test 2: %s\n", test2); // Devrait afficher ""

    char test3[] = "HELLO";
    my_strupper(test3);
    printf("Test 3: %s\n", test3); // Devrait afficher "HELLO"
}

void my_strcpy(char dest[], char src[]){
    int i;
    
    int n=strlen(src);
    /*strlen parcoure la chaine de carac jusqu'à \0 inclus*/
    for(i=0; i<=n;i++){
        dest[i]=src[i];
    }
    /*
     //autre proposition
    for(i=0; src[i]!='\0'; i++){
        dest[i]=src[i];
    }
    dest[i+1]='\0';*/
}

int my_strcmp(char s1[], char s2[]){
    int i=0;
    /*
    //V1
    for(i=0; s1[i]!='\0' || s2[i]!='\0'; i++){
        if(s1[i]==s2[i]){
            //continue;
        }else if (s1[i]<s2[i])
        {
            return -1;
        }else if (s1[i]>s2[i]){
            return 1;
        }        
    }
    return 0;*/

    //V2
    while ((s1[i]!='\0' || s2[i]!='\0' ) && s1[i]==s2[i]){
        i++;
    }
    if (s1[i]<s2[i]){
        return -1;
    }else if(s1[i]>s2[i]){
        return 1;
    }
    return 0;    
}

void my_strupper(char s[]){
    int diffeMinMaj='a'-'A';
    int i=0;
    while (s[i]!='\0'){
        if('a'<=s[i] && s[i]<='z'){
            s[i]-=diffeMinMaj;
        }
        i++;
    }
}