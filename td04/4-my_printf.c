#include <stdio.h>
#include <stdarg.h>

void my_printf(char format[], ...);

void print_base10(int n){
	if(n/10==0) putchar(n%10 + '0');
	else{
		print_base10(n/10);
		putchar(n%10 + '0');
	}
}
void print_base16(int n){
	if(n/16 !=0) print_base16(n/16);
	if (n%16 <10) putchar(n%16 + '0');
	else putchar (n%16 -10 + 'A');
}

int main(){
    print_base10(123);
	putchar('\n');
	
	print_base16(15);
	putchar('\n');
	return 0;
}

void my_printf(char format[], ...){

}

