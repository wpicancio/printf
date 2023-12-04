#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list ap;
    int    count;

    count = 0;
    va_start(ap, format);
    while (*format)
    {
        if (*format == '%')
           count += ft_check_format(*(++format), ap);
        else 
           count += write(1, format, 1);
        format++;
    }
    va_end(ap);
    return (count);
}

/*int main()
{
    int x;

    x = -5254;
    ft_printf("%i", x);
    return (1);
}*/