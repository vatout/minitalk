/*
** my.h for my.h in /home/vatout_a/lib/my
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Sun Nov 15 14:26:47 2015 Vatoutine Artem
** Last update Mon Jan  4 11:06:14 2016 Vatoutine
*/

#ifndef MY_H_
# define MY_H_

# include <stdarg.h>
# include "./funk.h"

int	my_printf(const char *src, ...);
int	my_va_conv_nbr(va_list ap);
void	my_put_oct(unsigned int nb);
int	my_va_conv_soct(va_list ap);
int	my_va_conv_putchar(va_list ap);
int	my_va_conv_putstr(va_list ap);
int	my_va_conv_ld(va_list ap);
int	my_va_conv_lld(va_list ap);
int	my_va_conv_long(va_list ap);
int	my_va_conv_hexmin(va_list ap);
int	my_va_conv_hexmaj(va_list ap);
int	my_va_conv_oct(va_list ap);
int	my_va_conv_bin(va_list ap);
int	my_va_conv_adr(va_list ap);
void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_putstr(char *str);
int	my_getnbr(char *str);

#endif /* MY_H_ */
