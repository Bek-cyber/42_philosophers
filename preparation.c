#include "philo.h"

void	preparation(t_philos *philos)
{
	int	i;

	i = 0;
	ft_init()->start = get_time();
	while (i < ft_init()->nb_philos)
	{
		pthread_create(&(philos[i].tr), NULL, start_game, (void *)(&philos[i]));
		pthread_detach(philos[i].tr);
		i += 2;
	}
	usleep(200);
	i = 1;
	while (i < ft_init()->nb_philos)
	{
		pthread_create(&(philos[i].tr), NULL, start_game, (void *)(&philos[i]));
		pthread_detach(philos[i].tr);
		i += 2;
	}
}
