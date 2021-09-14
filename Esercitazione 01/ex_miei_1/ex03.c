#include <stdio.h>
#include <math.h>

int main(){
	
	int a = 0;								 //per leggere da tastiera 
	printf("Inserisci il numero: ");
	scanf("%d", &a);
	
	for (int i = 0; i < a; i++){
		for (int z = 0; z < a; z++){		//se in questa riga avessi messo i al posto di z avrebbe funzionato comunque 
			printf ("*");
		}
		printf("\n"); 							//questo è per cambiare riga
	}
	return 0;
}

