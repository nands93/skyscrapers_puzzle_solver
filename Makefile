NAME = skyscrapers

CC	= gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ./src/puzzle.c ./src/skyscraper.c ./src/utils.c ./src/utils2.c ./src/utils3.c ./src/valid.c ./src/valid2.c

OBJS = $(SRCS:.c=.o)

%.o: %.cpp
	$(CC) -c $< $(CFLAGS) -o $@

$(NAME): $(OBJS)
	$(CC) $^ $(CFLAGS) -o $@
	printf "COMPILATION SUCCESSFUL!\n"

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	printf "FULLY CLEANED!\n"

re: fclean all

.SILENT:

.PHONY: all clean fclean re