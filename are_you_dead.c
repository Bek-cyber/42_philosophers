#include "philo.h"

int	are_you_dead(t_philos *philos)
{
	int	i;
	int	all_eat;

	while (1)
	{
		i = -1;
		all_eat = 0;
		while (++i < ft_init()->nb_philos - 1)
		{
			if (ft_init()->time_to_die <= (get_time() - philos[i].last_eat))
			{
				print(philos[i].id, "died\n", 1);
				return (TRUE);
			}
			if (ft_init()->nb_of_eat > 0
				&& (philos[i].eat_counter >= ft_init()->nb_of_eat))
				all_eat++;
		}
		if (ft_init()->nb_of_eat > 0 && (all_eat >= (ft_init()->nb_philos - 1)))
		{
			pthread_mutex_lock(&(ft_init()->print));
			printf("Each philo ate %d times\n", ft_init()->nb_of_eat);
			return (TRUE);
		}
	}
}
