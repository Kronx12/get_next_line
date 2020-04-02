CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=get_next_line.a
SRCS=get_next_line.c \
	 get_next_line_utils.c
OBJS=$(SRCS:.c=.o)
INC=get_next_line.h
RM=rm -f
	
%.c%.o:
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

all:		$(NAME)

$(OBJS):	$(INC)

$(NAME): 	$(INC) $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(BNS)

fclean: 	clean
	$(RM) $(NAME)

re:		fclean all
	
.PHONY: all bonus clean fclean re
