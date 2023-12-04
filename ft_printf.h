#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define DECIMAL   "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"


int		ft_printf(const char *format, ...);
int     ft_check_format(char letter, va_list ap);
int	ft_putnbr(int nb);
int	ft_strlen(const char *s);
int  ft_printstr(char *str);
int  ft_printchar(int c);
int  ft_print_i_d (int id);

#endif