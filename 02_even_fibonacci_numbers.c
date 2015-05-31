/*
    Problem 02
    Even Fibonacci numbers

    Each new term in the Fibonacci sequence is generated by adding
    the previous two terms. By starting with 1 and 2, the first 10
    term will be:
    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

    Question:
    By considering the terms in the Fibonacci sequence whose values
    do not exceed four million, find the sum of the
    even-valued terms.

    Answer: 4613732

*/
#include <stdio.h>

#define UPPER_BOUND 4000000

int main()
{

    unsigned int operand1 = 0;
    unsigned int operand2 = 1;
    unsigned int number = 1;
    unsigned int sum = 0;

    while (number <= UPPER_BOUND)
    {
        number = operand1 + operand2;
        operand1 = operand2;
        operand2 = number;

        //printf("%d\n", number);
        if (number % 2 == 0)
            sum += number;
    }

    printf("%d\n", sum);
    return 0;

}