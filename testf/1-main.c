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

    // _printf("Name: %s, Genotype: %c\n", "Fatihah", 'A', 'A');
    // printf("Name: %s, Genotype: %c%c\n", "Fatihah", 'A', 'A');

    // int n = 0;

    // _printf("Name: %s\nAge: %d years old\nGenotype: %c %c\n", "Fati", 2050, 'A', 'A');

    //  _printf("%%\n");
    _printf("number: %d\n", 2050);
    _printf("name: %s\n", "fati");
    _printf("%%\n");
    _printf("grade: %c\n", 'A');
    // printf("number: %d\n", 2050);
    return 0;
}