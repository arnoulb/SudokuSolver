/*
** errors.c for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 11:35:19 2016 Arnould Jean-Michel
** Last update Sat Feb 27 17:48:32 2016 Arnould Jean-Michel
*/

#include <stdlib.h>
#include "functions.h"

int	count(char *str)
{
  int	i;
  int	a;

  a = 0;
  i = 0;
  while (str && str[i])
    {
      if (str[i] == '\n')
	a++;
      i++;
    }
  return (a + 1);
}

char	**my_put(char *str, int nb)
{
  char	**array;
  int	i;
  int	t;
  int	n;

  n = 23;
  i = 0;
  array = malloc(sizeof (char *) * nb);
  while (str[n] != '-' && str[n])
    {
      array[i] = malloc(sizeof (char) * 22);
      t = 0;
      while (str[n] != '\n' && str[n])
	{
	  array[i][t] = str[n];
	  t++;
	  n += 2;
	}
      array[i][t] = '\n';
      array[i][t + 1] = 0;
      n += 3;
      i++;
    }
  array[i] = 0;
  return (array);
}

char	**my_split(char *str)
{
  int	nb_word;

  nb_word = count(str);
  return (my_put(str, nb_word));
}
