#include "push_swap.h"

int main(int ac, char **av)
{
	int	i;
	t_stack	*a;
	t_stack	*b;
	int	n;

	i = 1;
	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);

	while (i < ac)
	{
		n = ft_atoi(av[i]);
		ft_stackadd_back(&a, ft_stacknew(n));
		i++;
	}
	print_stack(a);
	push_swap(&a, &b);
	print_stack(a);
}
