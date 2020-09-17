#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 3 - Puissance (1/3)

int main()
{
  int k;
  float resultat=1, x;
  printf("Saisir valeur de x: ");
  scanf("%f", &x);
  printf("Saisir la puissance: ");
  scanf("%d", &k);
  if(k>=0)
  {
    for(int i=0; i<k; i++)
    {
      resultat=resultat*x;
    }
    printf("%.4f ^ %d = %.2f\n", x, k, resultat);
  }
  else
  {
    printf("Erreur\n");
  }
}
//Pour x^18, le programme fait 18 tours de boucle