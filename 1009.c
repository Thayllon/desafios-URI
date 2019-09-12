#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char nomeV;
	double sal, tVen;
	
	scanf("%s", &nomeV);
	scanf("%lf", &sal);
	scanf("%lf", &tVen);
	
	sal = sal + ((tVen * 15) / 100);
	
	printf("TOTAL = %.2lf\n", sal);
		
	return 0;
}
