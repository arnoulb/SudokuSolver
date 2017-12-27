/*
** errors.c for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 15:13:19 2016 Arnould Jean-Michel
** Last update Sun Feb 28 11:01:05 2016 Arnould Jean-Michel
*/

#include <string.h>

int	nb_char(char c, char *map)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (map[i])
    {
      if (map[i] == c)
	nb++;
      ++i;
    }
  return (nb);
}

int	check_order(char *map)
{
  int	i;

  i = 0;
  while (map[i])
    {
      if (i == 0 || i == 19 || i == 210 || i == 229
	  || i % 21 == 0 || i % 21 == 19)
      	if (map[i] != '|')
      	  return (1);
      if ((i > 0 && i < 19) || (i > 210 && i < 229))
      	if (map[i] != '-')
      	  return (1);
      ++i;
    }
  return ((i != 231) ? 1 : 0);
}

int	error(char *map)
{
  if (check_order(map) == 1)
    return (1);
  else
    return (0);
}
