#include <stdio.h>
#include <math.h>

int main (){
	
	int a = 1;
	int i = -1;
	float res = 0;
	 while (a != 0){
	 	printf("Inserire il numero: ");
	 	scanf("%d", &a);
	 	res = res + a;
	 	i++;
	 }
	 res = res/i;
	 
	 printf("Il risultato è %f", res);
	 
	 return 0;
}
