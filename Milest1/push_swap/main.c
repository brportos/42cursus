#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_stats	*ops;

	a = NULL;
	b = NULL;
	if (ac < 2)
		return (0);
	if (count_strategy_flags(ac, av) > 1 || count_bench_flags(ac, av) > 1)
		return (write(2, "error\n", 6), 1);
	isdoublequoted(&a, av);
	ops = malloc(sizeof(t_stats));
	compute_disorder(a, ops);
	if (apply_flag_strategy(ac, av, &a, &b, ops) == 0)
		adaptive(&a, &b, ops);
	is_bench(ac, av, ops);
	ft_stackclear(&a);
	ft_stackclear(&b);
	free(ops);
}
