#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para inserir acentua��o

int main(){ 

	int a, b, vetX[5], vetY[5];
	setlocale(LC_ALL,"");
	
	for(a = 1; a <= 5; a++) {
		printf("Vetor X - digite o %d� n�mero: ", a);
		scanf("%d", &vetX[a]);
	}

	printf("\n");
		
	for(a = 1; a <= 5; a++) {
		printf("Vetor Y - digite o %d� n�mero: ", a);
		scanf("%d", &vetY[a]);
	}	

	printf("\n");
	
	printf("Vetor +: ");
	for(a = 1; a <= 5; a++) {		
		printf("%d ", vetX[a]);
	}

	printf("\n");
	
	printf("Vetor *: ");
	for(a = 1; a <= 5; a++) {		
		printf("%d ", vetY[a]);
	}	

	return 0;
     
 }

