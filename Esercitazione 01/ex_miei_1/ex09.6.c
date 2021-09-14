#include <stdio.h>
#include <math.h>

int main(){
	
	int a = 0;
	int b = 0;
	
	printf("Inserire i due valori:\n");
	scanf("%d%d", &a, &b);
	
	while (a+b != 10){
		
		printf("Inserire i due valori ");
		scanf("%d%d", &a, &b);
	}
	
	return 0;
	
}
		
		
