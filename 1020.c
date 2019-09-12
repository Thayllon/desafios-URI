#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int idade, auxIdade;

	scanf("%d", &idade);
	
	auxIdade = idade / 365;
	idade = idade - (auxIdade * 365);
	printf("%d ano(s)\n", auxIdade);

	auxIdade = idade / 30;
	idade = idade - (auxIdade * 30);
	printf("%d mes(es)\n", auxIdade);

	auxIdade = idade / 1;	
	idade = idade - (auxIdade * 1);
	printf("%d dia(s)\n", auxIdade);
	
	return 0;	
}
