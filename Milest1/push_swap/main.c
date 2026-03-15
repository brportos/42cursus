#include "push_swap.h"

int main(int ac, char **av)
{
	int	i;
	t_stack	*a;
	t_stack	*b;

	i = 0;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	while (i < ac)
	{
		ft_stackadd_back(&a, ft_stacknew(ft_atoi(av[i])));
		i++;
	}
	print_stack(a);
	selection_sort(&a, &b);
	print_stack(a);
}
