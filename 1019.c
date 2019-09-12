#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int N, auxH, horas, minutos, segundos;
	
	scanf("%d", &N);
	
	auxH = N / 3600; 
	horas = auxH;
	N = N - (auxH * 3600);
	
	auxH = N / 60;
	minutos = auxH;	 
	N = N - (auxH * 60);

	auxH = N / 1;
	segundos = auxH;	 
	N = N - (auxH * 1);
	
	printf("%d:%d:%d\n", horas, minutos, segundos);
	return 0;
}

