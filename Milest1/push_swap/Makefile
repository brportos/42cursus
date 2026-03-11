NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJ_DIR = obj

SRC = ft_swap.c \
		ft_sa.c \
		ft_sb.c \
		ft_ss.c \
		ft_pa.c \
		ft_pb.c \
		ft_stack_rotation.c \
		ft_a_rotation.c \
		ft_b_rotation.c \
		ft_a_and_b_rotation.c \
		ft_stack_rrotation.c \
		ft_a_rrotation.c \
		ft_b_rrotation.c \
		ft_a_and_b_rrotation.c 
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "push_swap is created"

clean:
	@rm -rf $(OBJ_DIR)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re