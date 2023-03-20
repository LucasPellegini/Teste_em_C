#include <stdio.h>
#include <string.h>

int main(){
	char x[100];
	int y;
	printf("Digite a frase: ");
	gets(x);
	y = strlen(x) - 1;
	while(y>=0){
		printf ("%c", x[y]);
		y--;
	}
	return 0;
}
