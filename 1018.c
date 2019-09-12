#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int N, auxN;
	
	scanf("%d", &N);
	printf("%d\n", N);
	
	auxN = N / 100; 
	N = N - (auxN * 100);
	printf("%d nota(s) de R$ 100,00\n", auxN);
	
	auxN = N / 50; 
	N = N - (auxN * 50);
	printf("%d nota(s) de R$ 50,00\n", auxN);
	
	auxN = N / 20; 
	N = N - (auxN * 20);
	printf("%d nota(s) de R$ 20,00\n", auxN);
	
	auxN = N / 10; 
	N = N - (auxN * 10);
	printf("%d nota(s) de R$ 10,00\n", auxN);
	
	auxN = N / 5; 
	N = N - (auxN * 5);
	printf("%d nota(s) de R$ 5,00\n", auxN);
	
	auxN = N / 2; 
	N = N - (auxN * 2);
	printf("%d nota(s) de R$ 2,00\n", auxN);

	auxN = N / 1; 
	N = N - (auxN * 1);
	printf("%d nota(s) de R$ 1,00\n",auxN);
	
	return 0;
}
