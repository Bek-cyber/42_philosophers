#ifndef PHILO_H
# define PHILO_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/time.h>
# include <pthread.h>

# define ERROR -1
# define TRUE 1
# define FALSE 0

typedef struct s_init
{
	int				nb_philos;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				nb_of_eat;
	long long int	start;
	pthread_mutex_t	*forks;
	pthread_mutex_t	print;
}				t_init;

typedef struct s_philos
{
	int				id;
	long long int	last_eat;
	int				eat_counter;
	int				left_fork;
	int				right_fork;
	pthread_t		tr;
}				t_philos;

typedef struct s_main
{
	t_init		*init;
	t_philos	*philos;
}				t_main;

int				are_you_dead(t_philos *philos);
int				ft_atoi(char *str);
void			go_sleep(long long int time);
void			print(int id, char *str, int fl);
void			*start_game(void *prmtr);
int				init_philos(t_philos **philos, t_init *init);
long long int	get_time(void);
void			preparation(t_philos *philos);
int				init_mutex(t_init *init);
int				check_init_input(int ac, char **av, t_init *init);
t_init			*ft_init(void);
void			free_all(t_philos *philos);

#endif