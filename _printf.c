#include "main.h"
#include <stdarg.h>


/**
 * _printf - prints out a value
 * @g:
 * @h:
 * 
 * Return:
 */

int _printf(const char * const format, ...)
{
    va_list args;
    int g = 0, h = 0;
    char *sdis = '\0';
    int tot_dis = 0;
    va_start(args, format);

    while (format[g] != '\0')
    {
        if (format[g] != '%')
        {   
             _putchar(format[g]);
             tot_dis++;
        }
        else
        {
            if (format[g + 1] == 'c')
            {
                _putchar(va_arg(args, int));
                tot_dis++;
                g++;
            }
            else if (format[g + 1] == 's')
            {
                g++;
                sdis = va_arg(args, char*);
                while (sdis[h] != '\0')
                {
                    _putchar(sdis[h]);
                    h++;
                    tot_dis++;
                }
            }
            else if (format [g + 1] == '%')
            {
                _putchar('%');
                tot_dis++;
            }
        }
        g++;

    }
    va_end(args);

    return (tot_dis);
}
 