#include <stdio.h>
#include <math.h>

//problema chiede di costruire un rettangolo di asterischi

//problema rettangolo si può fare perché la base te la danno i pixel
//alla riga n la base sarà n per costruzione

int main (){
	
	int h = 0;
	
	printf("Inserisci altezza positiva: ");
	scanf("%d", &h);
	
	while (h < 0){
		printf("Inserisci altezza positiva: ");
		scanf("%d", &h);
	}
	
	for (int i = 0; i < h; i++){
		for (int z = 0; z <= i; z++){
			printf("*");
		}
		printf("\n");	
	}
	
	return 0;
}
