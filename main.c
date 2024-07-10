#include <stdio.h>
#include "myfunction.h"

int main() {
    int a = 10;
    int b =5;
    int sum = add(a,b);

    printf("Sum of %d and %d is %d\n",a,b,sum);

    return 0;


}