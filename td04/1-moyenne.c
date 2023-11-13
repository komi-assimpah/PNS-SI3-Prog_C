#include <stdio.h>
#include <stdarg.h>

float moyenne(int count, ...);

int main(){
    printf("Moyenne1 = %f\n", moyenne(2, 10.0, 15.0));
    printf("Moyenne2 = %f\n", moyenne(5, 10.0, 15.0, 18.5, 0.0, 3.5));
    printf("Moyenne3 = %f\n", moyenne(0));
}

float moyenne(int count, ...){
    va_list ap;

    float moy=0;
    float sum=0;
    int i=0;

    va_start(ap, count);
    if(count>0){
        while (i<count){
            sum+=va_arg(ap, double);
            i++;
        }
        va_end(ap);
        moy=sum/count;
        return moy;
    }else{
        return 0;
    }


}