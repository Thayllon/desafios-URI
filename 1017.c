#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int tempo, velocidade;
	double carro;
	
	carro = 12;
	
	scanf("%d", &tempo);
	scanf("%d", &velocidade);
	
	carro = (tempo * velocidade) / carro;
	
	printf("%.3lf\n", carro);
	return 0;
}
