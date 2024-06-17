#include<stdio.h>

int main (void)
{
    char c [20]= "do you agree?";
    char activate;

    printf("%s (y/n):",c);
    scanf("%c", &activate);

    if ( activate == 'y')
    {
         printf("Agree.\n");
    }
    else if ( activate == 'n')
    {
        printf("Disagree.\n");
    }
}