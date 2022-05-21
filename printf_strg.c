#include "main.h"
#include <stdarg.h>

int _print_strng(va_list args)
{
    char *d = va_arg(args, char*);
    int h = 0;
    while (d[h] != '\0')
    {
        _putchar(d[h]);
        h++;
    }
    return (0);
}