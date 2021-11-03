#include "philo.h"

void	free_all(t_philos *philos)
{
	if (philos)
		free(philos);
	if (ft_init()->forks)
		free(ft_init()->forks);
}
