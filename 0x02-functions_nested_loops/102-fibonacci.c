#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    long a = 1, b = 2, c, i;

    printf("%ld, %ld, ", a, b);

    for (i = 3; i <= 50; i++)
    {
        c = a + b;
        printf("%ld", c);

        if (i < 50)
            printf(", ");

        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}

