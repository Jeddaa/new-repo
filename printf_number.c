#include "main.h"
#include <stdarg.h>

int _print_num(int num)
{
   if (num < 0)
    {
        _putchar('-');
        num = -num;
    }
     if (num/10)
       _print_num( num / 10);
 
   
    _putchar(num % 10 + '0');
    
// while (num > 0)
// {
//     _putchar ('0' + (num % 10));
//     num /= 10;
// }



    return (0);
}