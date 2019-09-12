#include <stdlib.h>
#include <stdio.h>

int main(){
	
	double valorQ;
	
	scanf("%lf", &valorQ);
	
	if(valorQ >= 0 && valorQ < 25){		
		printf("Intervalo [0,25]");
				
	} else if(valorQ >= 25 && valorQ < 50){		
		printf("Intervalo (25,50]");
		
	} else if(valorQ >= 50 && valorQ < 75){
		printf("Intervalo (50,75]");
		
	} else if(valorQ >= 75 && valorQ <= 100){
		printf("Intervalo (75,100]");
		
	} else {
		printf("Fora de intervalo");
	}
	
	return 0;	
}

