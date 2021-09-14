#include <stdio.h>
#include <math.h>

int main(){
	
	int a = 0;
	int i = 0;
	
	printf("Inserisci il numero: ");
	scanf("%d", &a);
	
	for (i; i < a; i++){							//inizia dal vero valore (non fa il più uno il for)
		if ( i == 0 || i == a-1) {
			for (int z = 0; z < a; z++){
				printf("*");
			}
			printf("\n");
		}
		else {
			for (int j = 0; j < a; j++){
				if ( j == 0 || j == a-1){
					printf("*");
				}
				else {
					printf(" ");
				}
			}
			printf("\n");
		}
	}
	return 0;
}

//hai fatto un bordello con le paretensi che si potevano evitare ma scialla
