/*
** main_serveur.c for main_serveur.c in /home/vatout_a/epitech/USP/minitalk
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Mon Feb  1 14:06:27 2016 Vatoutine
** Last update	Tue Feb 09 11:29:00 2016 Vatoutine Artem
*/

#define _BSD_SOURCE
#define _POSIX_SOURCE
#include "include/my.h"
#include "include/funk.h"

void			my_server_write(int signum)
{
  static int		        inc = 0;
  static unsigned char	letter = '\0';
  int			              one;

  one = 1;
  if (signum == SIGUSR1)
    {
      letter |= 1;
      if (inc < 7)
        letter <<= 1;
    }
  else if (signum == SIGUSR2)
    {
      if (inc < 7)
        letter <<= 1;
    }
  inc++;
  if (inc == 8)
    {
      my_putchar(letter);
      letter = '\0';
      inc = 0;
    }
}

int	main()
{
  my_put_nbr(getpid());
  my_putchar('\n');
  signal(SIGUSR1, my_server_write);
  signal(SIGUSR2, my_server_write);
  while(3);
  return (0);
}
