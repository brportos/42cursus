#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	apply_flag_strategy(ac, av, &a, &b);
	if (ac == 2 && ft_strchr(av[1], ' '))
		isdoublequoted(&a, av);
	else
		isunquoted(&a, ac, av);
	adaptive(&a, &b);
	print_stack(a);
	ft_stackclear(&a);
}
