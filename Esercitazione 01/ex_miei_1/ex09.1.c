#include <stdio.h>
#include <math.h>

int main(){
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("Inserisci 3 interi\n: ");
	scanf("%d%d%d", &a,&b,&c);
	
	printf("Il risultato �: \n");
	
	if (a > b && a > c){
		printf("%d\n", a);
		if (b > c) {
			printf("%d\n", b);
			printf("%d\n", c);
		}
		else{
			printf("%d\n", c);
			printf("%d\n", b);
		}
	}
	else if (b > a && b > c){
			printf("%d\n", b);
			if (a > c) {
				printf("%d\n", a);
				printf("%d\n", c);
			}
			else{
				printf("%d\n", c);
				printf("%d\n", a);}}
	else{
		printf("%d\n", c);
		if (a > b){
			printf("%d\n", a);
			printf("%d\n", b);
		}
		else{
			printf("%d\n", b);
			printf("%d\n", a);
		}
	}
	return 0;
}

//esercizio fatto in maniera molto brutale ma apparte l'uso delle liste, che ancora 
//non abbiamo fatto, non ho saputo che altro fare
