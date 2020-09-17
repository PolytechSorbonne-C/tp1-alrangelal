#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 5 - Fractions Egyptiennes

int main ()
{
  int num, den, i=1;
  printf("Saisir numerateur: ");
  scanf("%d", &num);
  printf("Saisir denominateur: ");
  scanf("%d", &den);
  printf("%d/%d = ",num,den);//afficher la fraction initiale
  while(num>0)
  {
    if((num*i)>=den)
    {
      printf("+ 1/%d ", i);
      num=(num*i)-den;
      den=den*i;
    }
    i++;
  }
  printf("\n");
}