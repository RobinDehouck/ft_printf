

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include "libft/libft.h"

int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_atoi_base(char *str, char *base);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hex(unsigned int num, const char format);
int		ft_printstr(char *str);
int		ft_printf(const char *s, ...);
int		ft_printchar(int c);
int		ft_printpercent(void);