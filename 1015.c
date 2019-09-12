#include <stdlib.h>
#include <stdio.h>

int main(){
	
	double x1, y1, x2, y2, distancia, distanciaQ;
	
	scanf("%lf %lf", &x1, &y1);
	scanf("%lf %lf", &x2, &y2);
	
	distancia = ((x2-x1) *(x2-x1) + (y2-y1) *(y2-y1));
	distanciaQ = sqrt(distancia);
	
	
	printf("%.4lf\n", distanciaQ);
	
	return 1;
}
