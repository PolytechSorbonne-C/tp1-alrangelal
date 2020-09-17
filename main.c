#include <stdio.h>
//Alejandro Iván Rangel Aldana
//TP1 Exo 1 - Fizzbuzz

int main() 
{
   int i;
   for(i=1;i<=100;i++)
   {
     if(i%3==0 || i%10==3) //On évalue si le nombre est multiple de 3 ou se termine par 3
     {
       printf("Fizz\n");
     }
     if(i%7==0 || i%10==7)//On évalue si le nombre est multiple de 3 ou se termine par 7
     {
       printf("Buzz\n");
     }
     else
     {
       printf("%d\n", i);
     }     
   }
}