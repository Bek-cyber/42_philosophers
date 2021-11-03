#include "philo.h"

int	ft_atoi(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] >= 48 && str[i] <= 57))
		num = (num * 10) + (str[i++] - '0');
	if (str[i])
		return (ERROR);
	return (num);
}
