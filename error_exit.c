#include "push_swap.h"

int		ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

void	error_exit(int code)
{
	if (code == 1)
		write(2, "Error\n", 7);
	else if (code == -1)
		write(2, "No memory left\n", 16);
	else if (code == 0)
		write(2, "NULL value\n", 12);
	exit(code);
}

int		only_num(char *str)
{
	while (*str)
	{
		if (!(ft_isdigit(*str) || *str == ' ' || (*str == '-' && ft_isdigit(*(str+1)))))
			return (0);
		str++;
	}
	return (1);
}
