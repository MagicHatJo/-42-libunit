# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 16:19:50 by jochang           #+#    #+#              #
#    Updated: 2019/05/19 19:18:44 by asarandi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = unit_test

SRC =	main \
		capture \

TESTS = 00_launcher_error \
		01_test_segv \
		02_test_abrt \
		03_test_timeout \
		04_test_buse \
		05_test_fpe \

INC =	-I inc \
		-I ../libft/inc \
		-I ../framework/inc \

LIB =	-L ../framework -lunit \
		-L ../libft -lft \

VPATH = test_error
OBJ_DIR = obj

OBJ  = $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(SRC)))
OBJ += $(addsuffix .o, $(addprefix $(OBJ_DIR)/, $(TESTS)))

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
	@make -C ../framework
	@printf "\e[32mCompiling: %s...\e[0m\n" $(NAME)
	@$(CC) $^ -o $@ $(LIB)

clean:
	@make -C ../libft clean
	@make -C ../framework clean
	@printf "\e[33mremoving objects...\e[0m\n"
	@rm -f $(OBJ)

fclean: clean
	@make -C ../libft fclean
	@make -C ../framework fclean
	@printf "\e[33mremoving executable...\e[0m\n"
	@rm -f $(NAME)
	@rm -rf $(OBJ_DIR)

re: fclean all

test: all
	@./$(NAME)

.PHONY: all clean fclean re test
