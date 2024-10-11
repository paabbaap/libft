CC = cc

FLAGS = -Wextra -Werror -Wall

SRCS = ft_atoi.c ft_bzero.c

OBJS = 

all:
	$(CC) -c $(SRCS) -o $(OBJS)

clean:
	rm -r $(SRCS)
	all