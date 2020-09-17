#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 2 - Calcul rapproché de Pi

int main()
{
  float x, y, h, pi, r=1;
  int p, N;
  printf("Donne le numero de points ");
  scanf("%d", &N);//Saisir le nombre de points total
  for(int i=0;i<=N;i++) //Boucle pour compter les nombres dans le cercle
  {
    x=(rand()*1.0)/RAND_MAX * (1+1)+(-1);
    y=(rand()*1.0)/RAND_MAX * (1+1)+(-1);
    h=(x*x)+(y*y);//Calcul de la distance entre le point et le centre
    if(h<=r)
    {
      p++;//Compteur
    }
  }
  pi=(4*(p*1.0))/(N*1.0);//Formule d'approximation de pi
  printf("L'approximation de pi est %.4f\n", pi);
}