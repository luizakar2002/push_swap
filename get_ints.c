#include "push_swap.h"

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			idx;
	int			idx_join;
	char		*join;

	if (!s1 || !s2 || !(join = malloc(sizeof(char) *
					(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 2))))
		return (NULL);
	idx = 0;
	idx_join = 0;
	while (s1[idx])
		join[idx_join++] = s1[idx++];
	idx = 0;
	join[idx_join++] = ' ';
	while (s2[idx])
		join[idx_join++] = s2[idx++];
	join[idx_join] = '\0';
	return (join);
}

int		*get_ints(char *argv, int size)
{
	int		len;
	int		start;
	char	*str;
	int		*ret;
	int		*ret1;
	int 	size1;

	size1 = size;	
	if (!only_num(argv)) //have to ckeck for elements of only type int
		error_exit(1);
	if (!(ret = (int *)malloc(size)))
		error_exit(-1);
	ret1 = ret;
	str = argv;
	start = 0;
	//printf("chchch %c\n", argv[35]);
	while (*str && size > 0)
	{
		len = 0;
		while (*str != ' ' && *str)
		{
			len++;
			str++;
		}
		*ret1 = ft_atoi(ft_substr((char const*)argv, (unsigned int)start, len));
		//printf("c %c\n", *argv);
		//printf("argv %s]\n", argv);
		ret1++;
		size--;
		start += len + 1;
		str++;
	}
	if (not_unique(ret, size1))
		error_exit(1);
	return (ret);
}

int		*data_to_array(stack_node *a)
{
	int		*arr;
	int		i;
	int		n;

	n = list_length(a);
	if (!(arr = malloc(n * sizeof(int))))
		return (NULL);
	i = 0;
	while (a)
	{
		arr[i] = a->data;
		a = a->next;
		i++;
	}
	return (arr);
}

int		*chunk_to_array(stack_node *b)
{
	int *arr;
	int i;
	int n;

	n = chunk_length(b);
	if (!(arr = malloc(n * sizeof(int))))
		return (NULL);
	i = 0;
	while (b && i < n)
	{
		arr[i] = b->data;
		b = b->next;
		i++;
	}
	return (arr);
}
