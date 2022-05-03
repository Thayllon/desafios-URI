#include <stdio.h>
#include <stdlib.h>

int main(){ 
	int a, positivo = 0;
	float soma, media, numDig[6], numPo[6];
	
	//Inserindo os valores
    for(a = 0; a < 6; a++) {
        scanf("%f", &numDig[a]);
		
		//Verificando se os valores são positivos
        if(numDig[a] > 0) {
            numPo[positivo] = numDig[a];
            positivo++;
        }        
	}	
	//Calculo soma dos positivos
	for(a = 0; a < 6; a++){
		if(numDig[a] > 0){
			soma += numDig[a];
		}
	}
	//Calculando a média
	media = (soma / positivo);
	
	//Resposta esperada pelo URI
	printf("%d valores positivos \n", positivo);
	printf("%.1f media", media);

	return 0;
}
