#include <stdio.h>

//typedef int (*fct)(int i1, int i2);

int iterate(int f(int i, int u), int t[], int n);
int sum(int p, int q);
int max(int p, int q);
int produit(int p, int q);

int main(int argc, char *argv[]){
    int tab[]={10, 2, 1, 50, 3};
    printf("%d \n", iterate(&max, tab, 5));
    printf("%d \n", iterate(&produit, tab, 5));
    printf("%d \n", iterate(sum, tab, 5));//& ???

}

int iterate(int f(int i, int u), int t[], int n){
    if(n==1) return t[0];
    //else return ( (*f)(iterate(f, t, n-1), t[n-1]));
    else return ( (*f)(iterate(f, t, n-1), t[n-1])); // * ???
}

int sum(int p, int q){
    return p+q;
}

int max(int p, int q){
    if(p<q) return q;
    else return p;
}

int produit(int p, int q){
    return p*q;
}