#include "/Users/lukarape/Desktop/push_swap/includes/push_swap.h"

int		count_spaces(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str == ' ')
			count++;
		str++;
	}
	return (count);
}

int		*get_ints(char *argv)
{

	int		len;
	int		start;
	char	*str;
	int		*ret;
	int		*ret1;
	int		size;

	size = count_spaces(argv) + 1;	
	if (!only_num(argv)) //have to ckeck for elements of only type int
		error_exit(1);
	if (!(ret = (int *)malloc(size)))
		error_exit(-1);
	ret1 = ret;
	str = argv;
	start = 0;
	str = argv;
	while (*str && size > 0)
	{
		len = 0;
		while (*str != ' ' && *str)
		{
			len++;
			str++;
		}
		*ret1 = ft_atoi(ft_substr((char const*)argv, (unsigned int)start, len));
		ret1++;
		size--;
		start += len + 1;
		str++;
	}
	return (ret);
}
