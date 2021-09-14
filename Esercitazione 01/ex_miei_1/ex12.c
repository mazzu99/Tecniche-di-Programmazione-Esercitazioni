#include <stdio.h>
#include <math.h>

//dati due interi trova il loro mcm; cioè i t.c n1%i == 0 && n2%i == 0

int main(){
	
	//secondo me il programma è giusto vedi su un altro compilatore 
	
	int n1 = 0;
	int n2 = 0;
	
	printf("Inserisci i numeri: ");
	scanf("%d%d", &n1,&n2);
	
	if ( n1%n2 == 0 || n1 == n2) printf("mcm: %d", n2);
	else if (n2%n1 == 0) printf("mcm: %d", n1);
	else {
		
		for ( int i = 2; i < n1 || i < n2; i++){	//se qui parte da 0 o da 1 non va bene per la divisione dopo
			
			if ( n1%i == 0 && n2%i == 0) printf("mcm %d", i);
			else if (i == n1 -1 || i == n2 - 1) {			//ho scordato l'uguale non mi ha detto niente
				printf("mcm 1");
				break;
			}
		}
	}
	
	return 0;
}
