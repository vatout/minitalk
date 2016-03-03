/*
** main_client.c for main_client.c in /home/vatout_a/epitech/USP/minitalk
**
** Made by Vatoutine
** Login   <vatout_a@epitech.net>
**
** Started on  Mon Feb  1 14:06:38 2016 Vatoutine
** Last update	Tue Feb 09 11:35:31 2016 Vatoutine Artem
*/

#define _BSD_SOURCE
#define _POSIX_SOURCE

#include "./include/my.h"
#include "./include/funk.h"

int	my_client_letter(int server_pid, unsigned char letter, int inc)
{
  if (inc < 8)
    {
      my_client_letter(server_pid, letter >> 1, inc + 1);
      if ((letter % 2) == 1)
        kill(server_pid, SIGUSR1);
      else
        kill(server_pid, SIGUSR2);
      usleep(500);
    }
  return (0);
}

int	my_client(int server_pid, char *src)
{
  int	inc;

  inc = 0;
  while (src[inc] != '\0')
    {
      my_client_letter(server_pid, (unsigned char)src[inc], 0);
      inc++;
    }
  return (0);
}

int	main(int ac, char **av)
{
  if (ac == 3)
    my_client((my_getnbr(av[1])), av[2]);
  return (0);
}
