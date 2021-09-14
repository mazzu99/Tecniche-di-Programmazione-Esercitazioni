#include <stdio.h>
#include <math.h>

int main(){
	
	int n = 0;
	int n1 = 1;
	int n2 = 1;
	int aus = 0;
	
	printf("Inserisci n: ");
	scanf("%d", &n);
	
	printf("%d\n", n1);						//scritto printf(n1) e non mi ha detto niente (non è andato e basta)
	//senza \n non capisci niente e ti sembra un 11 il primo passaggio
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", n2);
		aus = n2;
		n2 = n2 + n1;
		n1 = aus;
	}
	
	return 0;
}
