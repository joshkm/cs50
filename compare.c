#include <stdio.h>

int main (void) {

    int x ;
    int y ;

    printf("what is x ?");
    scanf("%d",&x);

    printf("what is y");
    scanf("%d",&y);

    if (x < y )
    {
        printf("x is less than y\n");
    }
    else
    {
        printf("x is not less than y\n");
    }
    return 0;
}