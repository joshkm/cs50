#include <stdio.h> 

int main (void)
{
    const int n;
    printf("size: ");
    scanf("%d", &n);
    for (int counter  = 0; counter < n; counter++)

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