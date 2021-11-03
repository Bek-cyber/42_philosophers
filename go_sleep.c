#include "philo.h"

void	go_sleep(long long int time)
{
	long long int	now;

	now = get_time() + time;
	while (now > get_time())
		usleep(600);
}
