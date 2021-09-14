#include <stdio.h>
#include <math.h>

int main(){
	
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;
	
	printf("Inserisci i numeri: ");
	scanf("%lf", &a);					//se ti scordi & il programma non da errori e si esegue 
	printf("Inserisci i numeri: ");		//senza fare niente in particolare (al printf non serve)	
	scanf("%lf", &b);
	if (a == 0 ) {
		printf("il risultato non esiste");
	}
	else {
		c = -(b/a);
		printf("%lf",c);
	}
	return 0;
}
