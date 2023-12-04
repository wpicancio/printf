#include "ft_printf.h"

int  ft_printchar(int c)
{
    return (write (1, &c, 1));
}

int  ft_printstr(char *str)
{
        if (*str)
            return (write(1,str, ft_strlen(str)));
        return write(1, "(null)", 6);
}

int  ft_print_i_d (int id)
{
    return (ft_putnbr_base(id));
}