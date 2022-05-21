#include "../main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @c: should be able to print an integer
 * @s: should be able to print a string
 * @%: should be able to print itself
 * Return: 0
 */

int main(void)
{
    /* %c %s %% */

    // _printf("Name: %s, Genotype: %c%c\n", "Fatihah", 'A', 'A');
    // printf("Name: %s, Genotype: %c%c\n", "Fatihah", 'A', 'A');

    int n = 0;
    n = _printf("%%\n");

    printf("n: %d\n", n);

    n = printf("%%\n");
    printf("n: %d\n", n);
    return 0;
}