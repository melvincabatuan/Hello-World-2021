#include <stdio.h>
#include "calculator.h"


int main() {
    float left, right;
    char op;
    int isValid = 1;

    do {
        printf("Enter a mathematical expression <NumberOperatorNumber>\n");
        printf("Enter any number twice to quit! \n");
        printf(">> ");
        scanf("%f%c%f", &left, &op, &right);
        printf("Your input is %f %c %f \n", left, op, right);

        switch (op) { // +, -, *, /, ^
            case '+':
                printf("The result is %0.2f\n", add(left, right));
                break;

            case '-':
                printf("The result is %0.2f\n", subtract(left, right));
                break;

            case '*':
                printf("The result is %0.2f\n", multiply(left, right));
                break;

            case '/':
                printf("The result is %0.2f\n", divide(left, right));
                break;

            case '^':
                printf("The result is %0.2f\n", (float) power((int) left, (int) right));
                break;

            default:
                puts("Invalid Operand!");
                isValid = 0;

        }

    } while (isValid);
    printf("Exiting...bye!");
    return 0;
}
