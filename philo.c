#include "philo.h"

int	main(int ac, char **av)
{
	t_philos	*philos;

	if (check_init_input(ac, av, ft_init()) == FALSE)
	{
		printf("Wrong input\n");
		return (ERROR);
	}
	if (init_mutex(ft_init()) == FALSE)
	{
		printf("Error in initialization of mutex\n");
		return (ERROR);
	}
	if (init_philos(&philos, ft_init()) == FALSE)
	{
		printf("Error in initialization of philosophers\n");
		return (ERROR);
	}
	preparation(philos);
	while (are_you_dead(philos) != TRUE)
		continue ;
	free_all(philos);
	return (TRUE);
}
