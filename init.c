#include "philo.h"

t_init	*ft_init(void)
{
	static t_init	init;

	return (&init);
}
