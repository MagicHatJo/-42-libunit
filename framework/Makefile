# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 16:19:50 by jochang           #+#    #+#              #
#    Updated: 2019/05/18 16:19:51 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libunit.a

SRC =	free_testlist \
		launch_tests \
		load_test \

INC =	-I inc \
		-I ../libft/inc \

LIB =	-L ../libft -lft \

VPATH = src
OBJ_DIR = obj

OBJ = $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(SRC)))
DEP = $(OBJ:%.o=%.d)

CC = gcc
CFLAGS = -Wall -Wextra -Werror $(INC)
MAKEOPTS = -j4

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@printf "\033[32mmaking objects...\033[0m\n"
	@mkdir -p $(OBJ_DIR)

-include $(DEP)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@printf "\e[32mCompiling: \e[0m%s\n" $<
	@$(CC) $(CFLAGS) -MMD -c $< -o $@

$(NAME): $(OBJ)
	@make -C ../libft
	@printf "\e[32mMaking: %s...\e[0m\n" $(NAME)
	@ar -rcs $@ $^

clean:
	@make -C ../libft clean
	@printf "\e[33mremoving objects...\e[0m\n"
	@rm -f $(OBJ)

fclean: clean
	@make -C ../libft fclean
	@printf "\e[33mremoving executable...\e[0m\n"
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all clean fclean re