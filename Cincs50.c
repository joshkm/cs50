#include <stdio.h>

int main(void) {
    char answer[100];  // Declare an array to store the input string
    printf("What's your name? ");  // Print a prompt
    fgets(answer, 100, stdin);  // Read input from the user and store it in 'answer'
    printf("Hello, %s", answer);  // Print the input string
    return 0;
}

