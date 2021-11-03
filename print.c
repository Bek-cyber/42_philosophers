#include "philo.h"

void	print(int id, char *str, int fl)
{
	pthread_mutex_lock(&(ft_init()->print));
	printf("%lld %d %s", (get_time() - ft_init()->start), (id + 1), str);
	if (fl == FALSE)
		pthread_mutex_unlock(&(ft_init()->print));
}
