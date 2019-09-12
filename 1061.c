#include <stdlib.h>
#include <stdio.h>

int main(){
	
	int W, Wi, Wf, X, Xi, Xf, Y, Yi, Yf, Z, Zi, Zf;
	
	printf ("Dia ");	
	scanf ("%d", &Wi);	
	scanf ("%d", &Xi);
	printf(" : ");
	scanf ("%d", &Yi);
		printf(" : ");
	scanf ("%d", &Zi);	
	printf ("Dia ");	
	//scanf ("%d", &Wf);	
	//scanf ("%d : %d : %d", &Xf, &Yf, &Zf);	
	
	W = Wi - Wf;
	X = Xi - Xf;
	Y = Yi - Yf;
	Z = Zi - Zf;

	printf ("%d dia(s)\n", W);
	printf ("%d hora(s)\n", X);
	printf ("%d minuto(s)\n", Y);
	printf ("%d segundo(s)\n", Z);
	
	return 0;
}
/*
#include <time.h>

clock_t tInicio, tFim, tDecorrido;

tInicio = clock();
//seu codigo vem aqui
tFim = clock();

//calcula aproximadamente o tempo em milisegundos gasto entre as duas chamadas de clock()
tDecorrido = ((tFim - tInicio) / (CLOCKS_PER_SEC / 1000));   */
