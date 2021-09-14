#include <stdio.h>
#include <math.h>

int main(){
	
	int a = 1;
	int min;
	
	printf("Inserisci il primo numero diverso da zero: ");
	scanf("%d", &a);
	while ( a == 0){
		printf("Dai serio fra metti sto numero");
		scanf("%d", &a);										//non ti dice se manchi un &
	}
	
	min = a;
	
	while (a != 0){
		printf("Inserisci numero: ");
		scanf("%d", &a);
		if ( a == 0) break;
		if (a < min){
			min = a;
		}
		
	}
	
	printf("Il minimo è: %d", min);
	
	return 0;
}
