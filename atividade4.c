#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //biblioteca para inserir acentuação

int main(){ 

	int i, j, contador, matrizA[4][4], matrizB[4][4], matrizC[4][4];
	setlocale(LC_ALL,"");
	
	printf("Matriz A\n"); 
	for (i = 1; i <= 3; i++){
  		for (j = 1; j <= 3; j++){
  			printf("(Linha %d / Coluna %d): ", i, j);
     		scanf("%d", &matrizA[i][j]);
  		}
  	}
  	
    printf("\n");  	
	printf("Matriz B\n");
	for (i = 1; i <= 3; i++){
  		for (j = 1; j <= 3; j++){
  			printf("(Linha %d / Coluna %d): ", i, j);
     		scanf("%d", &matrizB[i][j]);
  		}
  	}
  	
	printf("\n"); 
	printf("Matriz C\n");	
	for (i = 1; i <= 3; i++){
        for (j = 1; j <= 3; j++){
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
			printf("(Linha %d / Coluna %d): ", i, j);
            printf("%d\n", matrizC[i][j]);
        }
    }

	return 0;
     
}	


