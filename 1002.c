#include <stdlib.h>
#include <stdio.h>

int main(){
	
	double area, raio;
	
	scanf("%lf", &raio);	
	area = 3.14159 * (raio * raio);	
	printf("A=%.4lf\n", area);
	
	return 0;
}


