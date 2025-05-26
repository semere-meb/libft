CC = cc
CFLAGS = -Wall -Wextra -Werror
DEBUG_FLAGS = -g

HEADER = libft.h
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

LIB = libft.a

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean clean_tests
	rm -f $(LIB) $(TEST)

re: fclean all
