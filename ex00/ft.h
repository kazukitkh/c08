#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void ft_putstr(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	write(1, str, j);
}

int	ft_strlen(char *str)
{
	int j;

	j = 0;
	while (str[j] != '\0')
		j++;
	return (j);
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}