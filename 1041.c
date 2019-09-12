#include <stdlib.h>
#include <stdio.h>

int main (){
	
	int a, b, aux;
	int n[3];
	
	
	for(a = 0; a < 3; a++){
		//receber valor
		scanf("%d\n", &n[a]);
	}
	
	
	for(a = 0; a < 3; a++){
		for(b = 1; b < 3; a++){
			if(n[a] > n[b]){
				
				aux = n[a];
				n[a] = n[b];
				n[b] = aux;
				
			}
		}
	}
	
	/*
	if(n1 < n2 && n1 < n3){
		printf("%d", n1);
		
	} else if (n2 < n1 && n2 < n3){
		printf("%d",n2);
		
	} else if(n3 < n1 && n3 < n2){
		printf("%d", n3);
	} */
	
	//printf("\n");
	return 0;
}
