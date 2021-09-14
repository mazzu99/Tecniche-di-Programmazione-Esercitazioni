#include <stdio.h>
#include <math.h>

//fare il programma di una formula di newton

int main (){
	
	double x = 0.0;
	double r1;
	int n = 0;
		
	printf("Inserisci x: ");
	scanf("%lf", &x);
	printf("Inserisci quante interazioni vuoi fare: ");
	scanf("%d", &n);
	
	double r0 = x;					//sbagliato qui che avevi messo r0 = 0 
	while (n > 0){					//e quindi alla prima interazione andava in tilt 
		
		r1 = (r0 + x/r0)/2;
		r0 = r1;
		n--;
	}
	
	printf("Il risultato era: %lf", r1);
	
	return 0; 
}
