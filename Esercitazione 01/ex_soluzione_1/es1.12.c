#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv) 
{
  int n1;
  printf("Inserire un primo numero positivo intero: ");
  scanf("%d", &n1);

  int n2;
  printf("Inserire un secondo numero positivo intero: ");
  scanf("%d", &n2);

  int mcm, prod = n1*n2;
  
  for(mcm = (n1>n2)?n1:n2; mcm <= prod; mcm++) 
  {
    printf("%d\n",mcm);
    if(mcm % n1 == 0 && mcm % n2 == 0)
      break;
  }
  printf("Il minimo comune multiplo e': %d\n", mcm);

  return 0;
}