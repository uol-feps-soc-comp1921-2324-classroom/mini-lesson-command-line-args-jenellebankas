#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* argv1 - 1st number inputted
* argv2 - 2nd number inputted

*/

int main(int argc, char *argv[]) {

    // check if there are the correct number of arguments 
    if (argc != 3) {
        printf("Usage: %s <number1> <number2>\n", argv[0]);
        return 1;
    }

    // check if the inputs are integers
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    if ((num1 < 0) || (num2 < 0)) {
        printf("The input must be an integer.\n");
        return 1;
    }

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}
