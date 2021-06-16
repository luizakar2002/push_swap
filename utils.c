#include "push_swap.h"

int		ft_strlen(const char *str)
{
	const char		*s;
	int				i;

	s = str;
	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	idx;
	char			*modified_s;

	if (!s || !(modified_s = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	idx = 0;
	while ((int)start < ft_strlen((char *)s) && s[start + idx] && idx < len)
	{
		modified_s[idx] = s[start + idx];
		idx++;
	}
	modified_s[idx] = '\0';
	return (modified_s);
}

int		ft_atoi(const char *str)
{
	int			sign;
	int			n;
	long int	nb;

	sign = 1;
	nb = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
	|| *str == '\f' || *str == '\r')
	{
		str++;
	}
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (nb > 2147483647 || nb < -2147483648)
		error_exit(1);
	n = nb;
	return (n * sign);
}

void	insertionSort(int *arr, int n)
{
    int i;
	int key;
	int j;
    for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void	ascending_sort(int *arr, int n)
{
	int a;
	int i;
	int j;

	for (i = 0; i < n; ++i)
	{
		for (j = i + 1; j < n; ++j)
		{
			if (arr[i] > arr[j]) 
			{
				a =  arr[i];
				arr[i] = arr[j];
				arr[j] = a;
			}
		}
	}
}

void	print_stack(stack_node *a)
{
	int size;
	
	size = list_length(a);
	printf("\n\n");
	while (size > 0)
	{
		printf("d %5d c %5d\n", a->data, a->chunk);
		a = a->next;
		size--;
	}
	printf("\n\n");
}

int		sorted(stack_node *a)
{
	int *arr;
	int	*arr1;
	int n;
	
	arr = data_to_array(a);
	arr1 = data_to_array(a);
	n = list_length(a);
	ascending_sort(arr1, n);
	while (n > 0 && *arr == *arr1)
	{
		n--;
		arr++;
		arr1++;
	}
	if (n == 0)
		return (1);
	return (0);
}
