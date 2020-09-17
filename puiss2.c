#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 3 - Puissance (2/3)

int main()
{
  int k;
  float x, res, c;
  res=1;
  printf("Saisir valeur de x: ");
  scanf("%f", &x);
  printf("Saisir la puissance: ");
  scanf("%d", &k);
  c=x;
  while(k>0)
  {
    if(k%2!=0) // Si la puissance est impaire (on finit toujours dans cette condition car cuand k=2 alors 2/2=1 donc k sera impaire)
    {
      res=res*c;
      c=c*c;
      k=k/2;
    }
    else // Si la puissance est paire
    {
      c=c*c;
      k=k/2;
    }
  }
  printf("Le resultat est %.3f\n",res);
}
//Pour x^18, le programme fait 5 tours de boucle 