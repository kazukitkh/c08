//#include <stdio.h>
#include "ft_stock_str.h"
#include <stdlib.h>

void	ft_str_to_copy(t_stock_str *c, char *d, int i, int j)
{
	d[j] = 0;
	d = c[i].str;
	c[i].copy = d;
	c[i].size = j;
}

int	ft_strlen(char *c)
{
	int		i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*c;
	char		*d;

	i = 0;
	c = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!c)
		return ((void *)0);
	c[ac].str = 0;
	c[ac].size = 0;
	c[ac].copy = 0;
	while (i < ac)
	{
		c[i].str = av[i];
		j = ft_strlen(c[i].str);
		d = (char *)malloc(sizeof(char) * (j + 1));
		ft_str_to_copy(c, d, i, j);
		free(d);
		i++;
	}
	return ((t_stock_str *)c);
}

/*int	main(int argc, char *argv[])
{
	t_stock_str *tmp;
	int	i;

	i = 0;
	tmp = (t_stock_str *)malloc(sizeof(t_stock_str) * (argc));
	tmp[argc - 1].size = 0;
	tmp[argc - 1].str = 0;
	tmp[argc - 1].copy = 0;
	tmp = ft_strs_to_tab(argc - 1, argv + 1);
	while (tmp[i].size)
	{
		printf("%d, %s, %s", tmp[i].size, tmp[i].str, tmp[i].copy);
		putchar('\n');
		i++;
	}
	return (0);
}*/