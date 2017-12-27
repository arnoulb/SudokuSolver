/*
** main.c for  in /home/daelomin/rendu/Rush/sudoki-bi
**
** Made by Arnould Jean-Michel
** Login   <daelomin@epitech.net>
**
** Started on  Sat Feb 27 10:39:19 2016 Arnould Jean-Michel
** Last update Sun Feb 28 22:39:05 2016 Arnould Jean-Michel
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

char	*read_map()
{
  int	ret;
  char	*str;

  str = malloc(sizeof (char) * 232);
  ret = read(0, str, 231);
  if (ret == -1 || ret == 0)
    {
      if (ret == -1)
	fprintf(stderr, "Error : could not read\n");
      free(str);
      return (NULL);
    }
  str[231] = 0;
  return (str);
}

void	free_all(char *str, char **map)
{
  int	i;

  i = 0;
  while (map[i])
    free(map[i++]);
  free(map);
  free(str);
}

void	fill_error(char **map)
{
  int	i;
  int	j;

  i = 0;
  while (map[i])
    {
      j = 0;
      while (map[i][j] && map[i][j] != '\n')
	{
	  map[i][j] = 'X';
	  ++j;
	}
      ++i;
    }
}

int	main(int ac, char **av)
{
  char	**test;
  char	*str;
  int	a;

  a = 0;
  (void) av;
  (void) ac;
  while (1)
    {
      str = read_map();
      if (str == NULL)
	return (0);
      if (error(str) == 1)
	{
	  fprintf(stderr, "MAP ERROR\n");
	  return (-1);
	}
      test = my_split(str);
      (checker(test) == 1) ? fill_error(test) : solver(test, 0);
      if (a != 0)
	printf("####################\n");
      my_display(test);
      free_all(str, test);
      ++a;
    }
}
