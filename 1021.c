#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int auxN;
	float N, auxNM;
		
	scanf("%f", &N);
	printf("NOTAS:\n");
	
	auxN = N / 100; 
	N = N - (auxN * 100);
	printf("%d nota(s) de R$ 100.00\n", auxN);
	
	auxN = N / 50; 
	N = N - (auxN * 50);
	printf("%d nota(s) de R$ 50.00\n", auxN);
	
	auxN = N / 20; 
	N = N - (auxN * 20);
	printf("%d nota(s) de R$ 20.00\n", auxN);
	
	auxN = N / 10; 
	N = N - (auxN * 10);
	printf("%d nota(s) de R$ 10.00\n", auxN);
	
	auxN = N / 5; 
	N = N - (auxN * 5);
	printf("%d nota(s) de R$ 5.00\n", auxN);
	
	auxN = N / 2; 
	N = N - (auxN * 2);
	printf("%d nota(s) de R$ 2.00\n", auxN);
	
	printf("MOEDAS:\n");
	
	auxN = N / 1; 
	N = N - (auxN * 1);
	printf("%d moeda(s) de R$ 1.00\n",auxN);

	auxN = N / 0.50; 
	N = N - (auxN * 0.50);
	printf("%d moeda(s) de R$ 0.50\n",auxN);
	
	auxN = N / 0.25; 
	N = N - (auxN * 0.25);
	printf("%d moeda(s) de R$ 0.25\n",auxN);
	
	auxN = N / 0.10; 
	N = N - (auxN * 0.10);
	printf("%d moeda(s) de R$ 0.10\n",auxN);

	auxN = N / 0.05; 
	N = N - (auxN * 0.05);
	printf("%d moeda(s) de R$ 0.05\n",auxN);
	
	auxNM = N / 0.01; 
	N = N - (auxNM * 0.01);
	printf("%.f moeda(s) de R$ 0.01\n",auxNM);
	
	return 0;
} 




