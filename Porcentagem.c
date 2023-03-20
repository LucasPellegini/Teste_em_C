#include <stdio.h>
#define SP 67836.43
#define RJ 36678.66
#define MG 29229.88
#define ES 27165.48
#define Outros 19849.53

int main (){
	int x;
	float total;
	printf("\n1 - SP \n2 - RJ \n3 - MG \n4 - ES, \n5 - Outros \n6 - Total\n");
	printf("\nDigite o n\243mero para saber a porcentagem: ");
	scanf("%d", &x);
	total = (SP+RJ+MG+ES+Outros);
	switch(x){
		case 1 : printf ("\nS\706o-Paulo: %.2f%%", (SP/total)*100); break;
		case 2 : printf ("\nRio de Janeiro: %.2f%%", (RJ/total)*100); break;
		case 3 : printf ("\nMinas Gerais: %.2f%%", (MG/total)*100); break;
		case 4 : printf ("\nEspirito Santo: %.2f%%", (ES/total)*100); break;
		case 5 : printf ("\nOutros: %.2f%%", (Outros/total)*100); break;
		default: printf ("\nTotal: %f", total); break;
	}
	return 0;
}
