#include <stdio.h>

/*fucnction statement*/

int add(int a, int b);

/*function definition*/

int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add (2,3);
    printf("The result is %d\n",result);
    return 0;
}

