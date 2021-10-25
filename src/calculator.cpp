#include "calculator.h"

float add(float left, float right) {
    return (left + right);
}

float subtract(float left, float right) {
    return (left - right);
}

float multiply(float left, float right) {
    return (left * right);
}

float divide(float left, float right) {
    return (left / right);
}

int power(int base, int exponent) {
    int result = 1;
    for(int i = 1; i <= exponent; i++)
    {
        result *= base;
    }
    return result;
}