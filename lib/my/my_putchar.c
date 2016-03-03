/*
** my_putchar.c for my_putchar.c in /home/vatout_a/lib/my
**
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
**
** Started on  Sun Nov 15 14:50:21 2015 Vatoutine Artem
** Last update	Mon Feb 08 18:59:01 2016 Vatoutine Artem
*/

#include <unistd.h>

void	my_putchar(unsigned char c)
{
  write(1, &c, 1);
}
