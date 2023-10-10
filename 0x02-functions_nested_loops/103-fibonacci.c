#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms
 *
 * Return: Always 0
 */
int main(void)
{
    long a = 1, b = 2, c, sum = 0;

    while (b <= 4000000)
    {
        if (b % 2 == 0)
            sum += b;

        c = a + b;
        a = b;
        b = c;
    }

    printf("%ld\n", sum);

    return (0);
}

