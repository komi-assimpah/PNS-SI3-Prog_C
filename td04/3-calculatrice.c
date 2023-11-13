#include <stdio.h>
#include <stdarg.h>

int evaluer(char operateur, int operande, ...);

int main (){
    printf(" somme : %d \n",evaluer('+', 1, 2, 3, -1));

    printf(" multiplication : %d \n ", evaluer('*', 2, 4, -1));

    printf(" - et * : %d \n",evaluer('-', 10, evaluer('*', 2, 2, 2, -1), 2, -1));

    printf(" / : %d \n",evaluer('/',9 ,3, 3, -1));

    
}

int evaluer(char operateur, int operande, ...){
    va_list ap;
    va_start(ap, operande);

    /*int result=0;
    int resultWithMultiplyOrDivide=1;

    //int current=va_arg(ap, int); ==> NON
    int current=operande;
    
    switch (operateur){
        case '+':
            while (current>=0)
            {
                result+=current;
                current=va_arg(ap, int);
            }
            va_end(ap);
            break;

        case '*':
            while (current>=0)
            {
                resultWithMultiplyOrDivide*=current;
                current=va_arg(ap, int);
            }
            va_end(ap);
            break;
    }*/

    int r = operande;
    operande=va_arg(ap, int);
    while (operande>=0){
        switch (operateur){
            case '+':
                r+=operande;
                operande = va_arg(ap, int);
                break;

            case '*':
                r*=operande;
                operande = va_arg(ap, int);
                break;

            case '-':
                r-=operande;
                operande = va_arg(ap, int);
                break;
            
            case '/':
                r/=operande;
                operande = va_arg(ap, int);
                break;
        }
        
    }

    return r;
}
