NAME		= libft.a
CFLAGS		+= -Wall -Werror -Wextra
CFLAGS		+= -I inc/
FILES = ft_atoi.c \
        ft_base64encode.c \
        ft_bzero.c \
        ft_capitalize.c \
        ft_isalnum.c \
        ft_isalpha.c \
        ft_isascii.c \
        ft_isdigit.c \
        ft_isprint.c \
        ft_isspace.c \
        ft_itoa.c \
        ft_lstadd.c \
        ft_lstdel.c \
        ft_lstdelone.c \
        ft_lstiter.c \
        ft_lstmap.c \
        ft_lstnew.c \
        ft_memalloc.c \
        ft_memccpy.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_memcpy.c \
        ft_memdel.c \
        ft_memmove.c \
        ft_memset.c \
        ft_printf.c \
        ft_printf_add_precision.c \
        ft_printf_add_width.c \
        ft_printf_colors.c \
        ft_printf_float_cosmetics.c \
        ft_printf_format_csws.c \
        ft_printf_format_ioux.c \
        ft_printf_get_char.c \
        ft_printf_get_double.c \
        ft_printf_get_specs.c \
        ft_printf_init_lib.c \
        ft_printf_is_format.c \
        ft_printf_iso8601.c \
        ft_printf_non_numeric.c \
        ft_printf_print_number.c \
        ft_printf_string_op.c \
        ft_printf_wchar_to_utf8.c \
        ft_putchar.c \
        ft_putchar_fd.c \
        ft_putendl.c \
        ft_putendl_fd.c \
        ft_putnbr.c \
        ft_putnbr_fd.c \
        ft_putstr.c \
        ft_putstr_fd.c \
        ft_strcat.c \
        ft_strchr.c \
        ft_strclr.c \
        ft_strcmp.c \
        ft_strcpy.c \
        ft_strdel.c \
        ft_strdup.c \
        ft_strequ.c \
        ft_stricmp.c \
        ft_striter.c \
        ft_striteri.c \
        ft_strjoin.c \
        ft_strlcat.c \
        ft_strlen.c \
        ft_strmap.c \
        ft_strmapi.c \
        ft_strncat.c \
        ft_strncmp.c \
        ft_strncpy.c \
        ft_strnequ.c \
        ft_strnew.c \
        ft_strnicmp.c \
        ft_strnstr.c \
        ft_strrchr.c \
        ft_strreplace.c \
        ft_strsplit.c \
        ft_strstr.c \
        ft_strsub.c \
        ft_strtolower.c \
        ft_strtoupper.c \
        ft_strtrim.c \
        ft_tolower.c \
        ft_toupper.c \
        ft_uriencode.c \
        get_next_line.c

SRC_DIR		= src/
OBJ_DIR		= obj/
OBJ_FILES	= $(addprefix $(OBJ_DIR), $(FILES:.c=.o))


all: $(NAME)

$(NAME): $(OBJ_FILES)
	@ar rcs $@ $^

$(OBJ_FILES): $(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

$(OBJ_DIR):
	@mkdir -p $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
