##########################################################
#					FLAGS								#
##########################################################

NAME		:= rush02
CC		:= cc
CFLAGS		:= -Wall -Wextra -Werror -g -Iincludes
DEBUG		:= -g

##########################################################
#					PROGRAM`S SRCS						 #
##########################################################

SRCS		:= srcs/main.c \
		srcs/validations.c \
		srcs/filling.c \
		srcs/find_number.c \
		srcs/find_million.c \
		srcs/selector_number.c \
		gnl/get_next_line.c \
		gnl/get_next_line_utils.c \
		libft/ft_atoi.c \
		libft/ft_bzero.c \
		libft/ft_calloc.c \
		libft/ft_lstend.c \
		libft/ft_lstnew.c \
		libft/ft_memcpy.c \
		libft/ft_memset.c \
		libft/ft_split.c \
		libft/ft_strdup.c \
		libft/ft_substr.c \
		libft/ft_strlen.c \
		libft/ft_strtrim.c \
		libft/ft_strchr.c \
		libft/ft_strrchr.c

OBJS		:= $(SRCS:.c=.o)

#########################################################
#						COLORS							#
#########################################################

CLR_RMV	:= \033[0m
RED	:= \033[1;31m
GREEN	:= \033[1;32m
YELLOW	:= \033[1;33m
BLUE    := \033[1;34m
CYAN	:= \033[1;36m

########################################################
#						FUNCTIONS					   #
########################################################

all: $(NAME)

$(NAME): $(OBJS)
	@ echo "$(GREEN)Compilation ${CLR_RMV}of ${YELLOW}$(NAME) ${CLR_RMV}..."
	@ cc -o $@ $^
	@ echo "$(GREEN)$(NAME) created ✔️"

clean:
	@ rm -rf $(OBJS)
	@ echo "$(RED)Cleaning up$(CLR_RMV)..."

fclean: clean
	@ rm -rf ${NAME}
	@ echo "$(RED)OBJS REMOVED ✔️"

re: fclean all

.PHONY: all clean fclean re

