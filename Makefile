NAME := libft.a


SRCDIR		:= .
INCDIR		:= .
OBJDIR		:= .obj

CC = cc

CFLAGS = -I$(INCDIR) -Wall -Werror -Wextra

# SOURCES = ft_atoi.c \
# 	   ft_bzero.c \
# 	   ft_calloc.c \

SOURCES		:= $(wildcard $(SRCDIR)/**/*.c) $(wildcard $(SRCDIR)/*.c)
OBJECTS		:= $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))


$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@ $(CFLAGS)

$(NAME): $(OBJECTS)
	@ar -r $(NAME) $(OBJECTS) >/dev/null 2>&1

all: $(NAME)

clean:

fclean:

re:
