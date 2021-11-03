#include "philo.h"

void	*start_game(void *prmtr)
{
	t_philos	*philo;

	philo = (t_philos *)prmtr;
	while (1)
	{
		pthread_mutex_lock(&(ft_init()->forks[philo->left_fork]));
		print(philo->id, "has taken a fork\n", 0);
		pthread_mutex_lock(&(ft_init()->forks[philo->right_fork]));
		print(philo->id, "has taken a fork\n", 0);
		philo->last_eat = get_time();
		print(philo->id, "is eating\n", 0);
		go_sleep(ft_init()->time_to_eat);
		philo->eat_counter++;
		pthread_mutex_unlock(&(ft_init()->forks[philo->right_fork]));
		pthread_mutex_unlock(&(ft_init()->forks[philo->left_fork]));
		print(philo->id, "is sleeping\n", 0);
		go_sleep(ft_init()->time_to_sleep);
		print(philo->id, "is thinking\n", 0);
	}
	return (NULL);
}
