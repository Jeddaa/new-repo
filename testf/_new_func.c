#include "main.h"
#include <stddef.h>

int (*_new_func(char c))(va_list)
{
    if (c == 'c')
        return (_print_xter);
    if (c == 's')
        return (_print_strng);
    if (c == 'd')
        return (_print_num);
    if (c == 'i')
        return (_print_num);
    if (c == 'o')
        return (_print_octa);
    if (c == 'u')
        return (_print_unsign);
    if (c == 'b')
        return (_print_unsignedTobinary);
    if (c == 'x')
        return (_print_hex);
    if (c == 'X')
        return (_print_upper_hex);
    if (c == 'S')
        return (_print_STRNG);
    
    return (NULL);
}