#include "ft_printf.h"

int ft_check_format(char letter, va_list ap)
{
    int    count;

    count = 0;
    if (letter == 'c')
        count +=  ft_printchar(va_arg(ap,int));
    else if (letter == 's')
        count += ft_printstr(va_arg(ap, char *));
    else if ( letter == 'i' || letter == 'd')
        count += ft_print_i_d(va_arg(ap, int));
    return (0);
}

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_putnbr(int nb)
{
    int count;

    count = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	if (nb < 0)
	{
		count += write (1, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
	{
		nb += 48;
		count += write(1, &nb, 1);
	}
	return (count);
}