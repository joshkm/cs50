#include <stdio.h> 

int main (void)
{
    int n;
    printf("size: ");
    scanf("%d", &n);
    for (int counter  = 0; counter < n; counter++)

   {

   for  (int insideCounter = 0; insideCounter < n; insideCounter++)
     
  {
     printf("?");
     printf("!");
     printf("#");
     
   }

   printf("\n");
 
    }
    return 0;

}