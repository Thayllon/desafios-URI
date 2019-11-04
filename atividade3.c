#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para inserir acentuação

int main(){ 

	int i, j, contador, matriz[5][5];
	setlocale(LC_ALL,"");
	
	for (i = 1; i <= 4; i++){
  		for (j = 1; j <= 4; j++){
  			printf("(Linha %d / Coluna %d): ", i, j);
     		scanf ("%d", &matriz[i][j]);
  		}
  	}
  		
	for(i = 1; i <= 4; i++){
		for (j = 1; j <= 4; j++){
			if(matriz[i][j] > 10){
				contador++;
			}
		}
	}

	printf("Existem %d números maiores que 10 na matriz!", contador);

	return 0;
     
}	


