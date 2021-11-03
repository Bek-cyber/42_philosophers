#include "philo.h"

int	init_philos(t_philos **philos, t_init *init)
{
	int	i;

	(*philos) = (t_philos *)malloc(sizeof(t_philos) * init->nb_philos);
	if ((*philos) == NULL)
		return (FALSE);
	i = -1;
	while (++i < init->nb_philos)
	{
		(*philos)[i].id = i;
		(*philos)[i].left_fork = i;
		(*philos)[i].right_fork = (i + 1) % init->nb_philos;
		(*philos)[i].eat_counter = 0;
		(*philos)[i].last_eat = get_time();
	}
	return (TRUE);
}
