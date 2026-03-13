/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 12:25:31 by brportos          #+#    #+#             */
/*   Updated: 2026/03/13 11:45:11 by brportos         ###   ########.fr       */
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

void				ft_swap(t_stack **stack);
void				ft_sa(t_stack **a);
void				ft_sb(t_stack **b);
void				ft_ss(t_stack **a, t_stack **b);

void				ft_pa(t_stack **a, t_stack **b);
void				ft_pb(t_stack **a, t_stack **b);

void				ft_stack_rotation(t_stack **head);
void				ft_a_rotation(t_stack **head);
void				ft_b_rotation(t_stack **head);
void				ft_a_and_b_rotation(t_stack **a_head, t_stack **b_head);

void				ft_stack_rrotation(t_stack **head);
void				ft_a_rrotation(t_stack **head);
void				ft_b_rrotation(t_stack **head);
void				ft_a_and_b_rrotation(t_stack **a_head, t_stack **b_head);

void				selection_sort(t_stack **a, t_stack **b);

void				pb_chunks(t_stack **a, t_stack **b, int chunk_size);
int					stack_size(t_stack *a);
int					find_max(t_stack *a);
int					ft_sqrt(int nb);
int					chunck_size(int size);
void				chunk_sort(t_stack **a, t_stack **b);

#endif