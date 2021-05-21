#include "/Users/lukarape/Desktop/push_swap/includes/push_swap.h"

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
	int sign;
	int nb;

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
	return (nb * sign);
}
