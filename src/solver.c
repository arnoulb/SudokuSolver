/*
** solver.c for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 23:30:47 2016 Arnould Jean-Michel
** Last update Sun Feb 28 22:27:27 2016 Arnould Jean-Michel
*/

#include <stdio.h>
#include "functions.h"

int	checker(char **map)
{
  int	i;
  int	j;

  i = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j])
	{
	  if (map[i][j] <= '9' && map[i][j] >= '0')
	    {
	      if (nb_in_line(map, i, map[i][j]) > 1
		  || nb_in_column(map, j, map[i][j]) > 1
		  || nb_in_square(map, i, j, map[i][j]) > 1)
		return (1);
	    }
	  ++j;
	}
      ++i;
    }
  return (0);
}

int	solver(char **map, int value)
{
  int	i;
  int	j;
  char	c;

  i = value / 9;
  j = value % 9;
  if (value == 81)
    return (1);
  if (map[i][j] != ' ')
    return (solver(map, value + 1));
  c = '1';
  while (c <= '9')
    {
      if (good_num(map, i, j, c))
	{
	  map[i][j] = c;
	  if (solver(map, value + 1))
	    return (1);
	}
      ++c;
    }
  map[i][j] = ' ';
  return (0);
}
