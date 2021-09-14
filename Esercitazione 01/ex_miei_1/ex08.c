#include <stdio.h>
#include <math.h>

int main (){
	
	int a = 1;
	
	while (a != 0){
		printf("Inserisci valore: ");
		scanf("%d", &a);
		for (int i = 0; i < a; i++){
			printf("*");
		}
		printf("\n");	
	}
	
	return 0;
}
