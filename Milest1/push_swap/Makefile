NAME = push_swap
PRINTF = ft_printf/libftprintf.a
LIBFT = libft/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ_DIR = obj
SRC = swap.c \
		stack_rotation.c \
		stack_rrotation.c \
		selection_sort.c \
		chunk_sort.c \
		chunk_utils.c \
		radix_sort.c \
		main.c \
		linked_list.c 
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(LIBFT) $(PRINTF) $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(PRINTF):
	@make -C ft_printf
$(LIBFT):
	@make -C libft
$(NAME): $(LIBFT) $(PRINTF) $(OBJ)
	@ar rcs $@ $^
	@echo "push_swap is created"

clean:
	@rm -rf $(OBJ_DIR)
	@make -C libft clean
	@make -C ft_printf clean
fclean: clean
	@rm -f $(NAME)
	@make -C libft fclean
	@make -C ft_printf fclean
re: fclean all
.PHONY: all clean fclean re