#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, aux, n[3];
	
	for(n[a] = 0; n[a] < 3; n[a]++){
		scanf("%d", &n[a]);
	} 
	
	for(a = 0; a < n[a]; a++){
		for(b = 1; b < n[a]; b++){
			aux = n[a];
			n[a] = n[b];
			n[b] = aux;	
		}
	}
	
	printf("%d", n[a]);
return 0;
}
