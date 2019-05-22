# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/18 16:19:50 by jochang           #+#    #+#              #
#    Updated: 2019/05/19 22:06:45 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_unit_test

SRC =	all_pass \
		main_header \
		main \
		capture \

TESTS = 00_launcher_c \
		01_test_c \
		02_test_c \
		03_test_c \
		04_test_c \
		05_test_c \
		06_test_c \
		07_test_c \
		00_launcher_s \
		01_test_s \
		02_test_s \
		03_test_s \
		04_test_s \
		05_test_s \
		00_launcher_p \
		01_test_p \
		02_test_p \
		03_test_p \
		04_test_p \
		00_launcher_d \
		01_test_d \
		02_test_d \
		03_test_d \
		04_test_d \
		05_test_d \
		06_test_d \
		07_test_d \
		08_test_d \
		09_test_d \
		10_test_d \
		11_test_d \
		12_test_d \
		00_launcher_star \
		01_test_star \
		02_test_star \
		03_test_star \

INC =	-I inc \
		-I ../libft/inc \
		-I ../framework/inc \

LIB =	-L ../framework -lunit \
		-L ../libft -lft \

VPATH=test_c:test_d:test_p:test_s:test_error:test_star
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

log: all
	@./$(NAME) > log.txt

.PHONY: all clean fclean re test log
