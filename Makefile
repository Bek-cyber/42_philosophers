NAME = philo
CFLAGS = -Wall -Wextra -Werror
SRCS	=	philo.c atoi.c check_init_input.c init_mutex.c get_time.c \
			init_philos.c print.c go_sleep.c start_game.c preparation.c \
			are_you_dead.c init.c free_all.c

OBJS	= $(SRCS:.c=.o)

HEADER = philo.h

all: $(NAME)

%.o: %.c $(HEADER)
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

norm:
	@norminette *.c
	@norminette *.h