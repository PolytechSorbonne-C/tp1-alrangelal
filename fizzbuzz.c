#include <stdio.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 1 - Fizzbuzz
int main() 
{
  int mt3, mt7;
  for(int i=1;i<=100;i++)
  { 
    mt3=i%3==0 || i%10==3;
    mt7=i%7==0 || i%10==7;

    if(mt3 && mt7)//Multiple de 3 ou se termine par 3 ET multiple de 7 ou se termine par 7
    {
      printf("FizzBuzz\n");
    }
    else
    {
      if(mt7)//On évalue si le nombre est multiple de 7 ou se termine par 7
      {
        printf("Buzz\n");
      }
      if(mt3)//On évalue si le nombre est multiple de 3 ou se termine par 3
      {
        printf("Fizz\n");
      }
      else 
      {
        printf("%d\n", i);// On affiche le nombre
      }
    }     
  }
}