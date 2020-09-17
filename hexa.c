#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 4 - Conversion Héxadecimale

int main()
{
  char c;
  printf("Saisir un nombre en héxadecimal ");
  c=getchar();
  if((c>='0' && c<='9') || (c>='A' && c<='F') || (c>='a' && c<='f'))
  {
    printf("Numero valide\n");
    int n=c-'0';
    printf("%c = %d\n", c, n);
  }
}