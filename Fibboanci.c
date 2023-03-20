#include <stdio.h>

int main (){
	int x, x1=0, x2=1, fib;
	printf("Digite o valor: ");
	scanf("%d", &x);
	while(x<0){
		printf ("Digite um valor positivo: ");
		scanf("%d", &x);
	}
	while(fib < x){
		fib = x1 + x2;
		x1 = x2;
		x2 = fib;
		printf("%d\n", fib);
	}
	if(fib==x)
	printf("\nO n\243mero %d est\240 na sequ\210ncia", x);
	else 
	printf("\nO n\243mero n\706o %d est\240 na sequ\210ncia", x);
	return 0;
}
