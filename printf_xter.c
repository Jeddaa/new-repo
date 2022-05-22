#include "main.h"
#include <stdarg.h>

int _print_xter(va_list arg)
{
  
    return (_putchar(va_arg(arg, int)));
}