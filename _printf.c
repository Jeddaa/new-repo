#include "main.h"


/**
 * @br
 * 
 * 
 * Return:
 */

int _printf(const char * const format, ...)
{
    int i = 0;
    while (format[i] != '\0')
    {
        _putchar(format[i]);
        i++;

    }
    return 0;
}
 