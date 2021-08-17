#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int	i;
	int	j;
	
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
		}
		i ++;
	}
}
