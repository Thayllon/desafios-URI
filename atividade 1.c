#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para inserir acentua��o

int main(){ 

	int a, num[10], contador = 0;
	float acumulador = 0;
	setlocale(LC_ALL,"");
	
    for(a = 1; a <= 10; a++) {
    	printf("Informe o %d� n�mero: ", a);
        scanf("%d", &num[a]);
	}
	
	for(a = 1; a <= 10; a++){
		if(num[a] >= 0){
			acumulador = acumulador + num[a];
		} else {
			contador++;
		}
	}
		
	printf("A soma de todos os n�meros positivos deste vetor �: %.2f\n", acumulador);
	printf("Esse vetor possui %d n�meros negativos", contador);

	return 0;
     
 }
		
