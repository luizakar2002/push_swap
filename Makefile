DIR_HEADERS = ./includes/

DIR_SRCS	= ./

SRC			= main.c \
			error_exit.c \
			get_ints.c \
		 	utils.c	\
		   	new_stack.c \
			struct.c \
			functions.c

SRCS		= $(addprefix $(DIR_SRCS), $(SRC))

OBJS		= $(SRCS:.c=.o)

NAME		= push_swap



GCC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra 

%.o: %.c
			$(GCC) $(CFLAGS) -I $(DIR_HEADERS) -c $< -o $@

$(NAME):	$(OBJS)
			$(GCC) $(CFLAGS) -I $(DIR_HEADERS)  $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

RE:			fclean all

PHONY:		all clean fclean re
