# include <stdio.h>

int main (void) {

    char answer [50];
    printf("Hey who are you");
    fgets(answer,50,stdin);
    printf("i am,%s\n",answer);
    return 0;

}