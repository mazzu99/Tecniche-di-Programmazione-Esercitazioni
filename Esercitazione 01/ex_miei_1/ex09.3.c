#include <stdio.h>
#include <math.h>

//problema chiede di costruire un rettangolo di asterischi

//problema rettangolo si può fare perché la base te la danno i pixel
//alla riga n la base sarà n per costruzione 

int main (){
	
	int a = 0;
	int z = 0;
	
	printf("Inserire altezza: ");
	scanf("%d", &a);
	
	for (int i = a; i > 0; i--){
		while ( z < i){
			printf("*");
			z++;
		}
		z = 0;
		printf("\n");
	}
	return 0;
}
