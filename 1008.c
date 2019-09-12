#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int numF, numH;
	double valH, sal;
	
	scanf("%d", &numF);
	scanf("%d", &numH);
	scanf("%lf", &valH);
	
	sal = valH * numH;
	
	printf("NUMBER = %d", numF);
	printf("\nSALARY = U$ %.2lf", sal);
	
	return 0;
}
