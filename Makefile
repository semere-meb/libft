CC = cc
CFLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g

HEADER = libft.h
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = $(wildcard b_ft_*.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(LIB)

bonus: $(LIB) $(BONUS_OBJS)
	ar rcs $(LIB) $(BONUS_OBJS)

re: all clean fclean bonus
