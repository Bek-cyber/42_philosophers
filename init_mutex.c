#include "philo.h"

int	init_mutex(t_init *init)
{
	int	i;

	i = -1;
	init->forks = malloc(sizeof(pthread_mutex_t) * init->nb_philos);
	if (init->forks == NULL)
		return (FALSE);
	while (++i < init->nb_philos)
		if (pthread_mutex_init(&(init->forks[i]), NULL))
			return (FALSE);
	if (pthread_mutex_init(&(init->print), NULL))
		return (FALSE);
	return (TRUE);
}
