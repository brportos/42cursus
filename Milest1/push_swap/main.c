#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (ac == 2 && ft_strchr(av[1], ' '))
		isDoubleQuoted(&a, av);
	else
		isUnquoted(&a, ac, av);
	push_swap(&a, &b);
	print_stack(a);
	ft_stackclear(&a);
}
