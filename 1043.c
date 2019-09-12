#include <stdlib.h>
#include <stdio.h>

int main(){
	
	float A, B, C, peri, area, soma;
	
	scanf("%f %f %f", &A, &B, &C);
	
	peri = A + B + C;
	area = ((A + B) * C) / 2;
	
	soma = B - C;

	if(A < (B + C) && A > soma){
		printf("Perimetro = %.1f\n", peri);
		
	} else {
		printf("Area = %.1f\n", area);
	}
		
	return 0;
}
