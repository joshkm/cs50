#include <stdio.h> 

int main (void)
{
    
    for (int counter  = 0; counter < 100; counter++)

   {

    int insideCounter = 0;

    while (insideCounter < 4)
     
  {
     printf("?");
     printf("!");
     insideCounter++;
  }
  printf("\n");
  

  insideCounter = 0;

  while(insideCounter < 4)
  {
     printf("#");
     insideCounter++;
   }

   printf("\n");
 
    }
    return 0;

}