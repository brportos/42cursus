/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: portos <portos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:25:31 by brportos          #+#    #+#             */
/*   Updated: 2026/03/24 20:43:32 by portos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#define SIMPLE  1
#define MEDIUM  2
#define COMPLEX  4
#define BENCH   8

# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

typedef struct s_select
{
	int				simple;
	int				medium;
	int				complex;
	int				adaptive;
	int				bench;
	int				total_ops;
	double			disorder;
	char			*strategy;
	char			*complexity;
}					t_select;

typedef struct s_stats
{
    int sa;
	int sb;
	int ss;
    int pa;
	int pb;
    int ra;
	int rb;
	int rr;
    int rra;
	int rrb;
	int rrr;
    int total;
} t_stats;

typedef void		(*t_strategy)(t_stack **a, t_stack **b, t_select *config);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);

void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);

void				ra(t_stack **a);
void				rb(t_stack **a);
void				rr(t_stack **a, t_stack **b);

void				rra(t_stack **a);
void				rrb(t_stack **a);
void				rrr(t_stack **a, t_stack **b);

void				selection_sort(t_stack **a, t_stack **b);

void				pb_chunks(t_stack **a, t_stack **b, int chunk_size);
int					stack_size(t_stack *a);
int					find_max(t_stack *a);
int					ft_sqr(int nb);
void				chunk_sort(t_stack **a, t_stack **b);
char				**ft_split(char const *s, char c);
void				radix_sort(t_stack **a, t_stack **b);
double				compute_disorder(t_stack *a);
t_stack				*ft_stacknew(int content);
void				ft_stackadd_back(t_stack **lst, t_stack *new);
void				print_stack(t_stack *a);
void				adaptive(t_stack **a, t_stack **b);
int					min_position(t_stack *a);
int					find_min(t_stack *a);
int					is_sorted(t_stack *a);
int					repetition_numbers(t_stack *a);
void				sort_three(t_stack **a);
void				sort_five(t_stack **a, t_stack **b);
void				ft_stackclear(t_stack **a);
void				isdoublequoted(t_stack **a, char **av);
void				isunquoted(t_stack **a, int ac, char **av);
void				sort_small(t_stack **a, t_stack **b);
void				apply_flag_strategy(int ac, char **av, t_stack **a,
						t_stack **b);

#endif