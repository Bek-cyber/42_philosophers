#include "philo.h"

int	check_init_input(int ac, char **av, t_init *init)
{
	if (ac != 5 && ac != 6)
		return (FALSE);
	init->nb_philos = ft_atoi(av[1]);
	init->time_to_die = ft_atoi(av[2]);
	init->time_to_eat = ft_atoi(av[3]);
	init->time_to_sleep = ft_atoi(av[4]);
	if (init->nb_philos < 1 || init->time_to_die < 0
		|| init->time_to_eat < 1 || init->time_to_sleep < 1)
		return (FALSE);
	if (av[5])
	{
		init->nb_of_eat = ft_atoi(av[5]);
		if (init->nb_of_eat < 0)
			return (FALSE);
	}
	else
		init->nb_of_eat = -1;
	return (TRUE);
}
