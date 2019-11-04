#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para inserir acentuação

int main(){ 

	int a, num[10], contador = 0;
	float acumulador = 0;
	setlocale(LC_ALL,"");
	
    for(a = 1; a <= 10; a++) {
    	printf("Informe o %dº número: ", a);
        scanf("%d", &num[a]);
	}
	
	for(a = 1; a <= 10; a++){
		if(num[a] >= 0){
			acumulador = acumulador + num[a];
		} else {
			contador++;
		}
	}
		
	printf("A soma de todos os números positivos deste vetor é: %.2f\n", acumulador);
	printf("Esse vetor possui %d números negativos", contador);

	return 0;
     
 }
		
