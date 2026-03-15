/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:25:31 by brportos          #+#    #+#             */
/*   Updated: 2026/03/15 13:00:19 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				content;
	int				index;
	struct s_stack	*next;
}					t_stack;

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
int					ft_sqrt(int nb);
int					chunck_size(int size);
void				chunk_sort(t_stack **a, t_stack **b);
char				**ft_split(char const *s, char c);
void				radix_sort(t_stack **a, t_stack **b);

t_stack				*ft_stacknew(int content);
t_stack				*ft_stacklast(t_stack *lst);
void				ft_stackadd_back(t_stack **lst, t_stack *new);
void				print_stack(t_stack *a);

#endif