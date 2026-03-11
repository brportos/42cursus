#include "push_swap.h"
#include <stdio.h>

t_stack  *ft_lstnew(int content);
void	ft_lstadd_back(t_stack **head, t_stack *new);
void	print_list(t_stack *head);
int main()
{
    t_stack	*a = NULL;
	t_stack	*b = NULL;

	ft_lstadd_back(&a, ft_lstnew(1));
	ft_lstadd_back(&a, ft_lstnew(2));
	ft_lstadd_back(&a, ft_lstnew(3));

	ft_lstadd_back(&b, ft_lstnew(10));
	ft_lstadd_back(&b, ft_lstnew(20));
	ft_lstadd_back(&b, ft_lstnew(30));

print_list(a);
ft_sa(&a);
print_list(a);
printf("*****");
print_list(b);
ft_sb(&b);
print_list(b);
printf("*****");
print_list(a);
print_list(b);
ft_ss(&a, &b);
print_list(a);
print_list(b);
    // print_list(a);
    // ft_a_rotation(&a);
    // print_list(a);
    // print_list(b);
    // ft_b_rotation(&b);
    // print_list(b);
    // print_list(a);
    // print_list(b);
    // ft_a_and_b_rotation(&a, &b);
    // print_list(a);
    // print_list(b);

	// print_list(a);
	// ft_a_rrotation(&a);
	// print_list(a);

	// print_list(b);
	// ft_b_rrotation(&b);
	// print_list(b);
}
t_stack  *ft_lstnew(int content)
{
    t_stack  *new_node;

    if (!content)
        return (NULL);
    new_node = malloc(sizeof * new_node);
    if (new_node == NULL)
        return (NULL);
    new_node->content = content;
    new_node->next = NULL;
    return (new_node);
}

void	ft_lstadd_back(t_stack **head, t_stack *new)
{
	t_stack	*temp;

	if (!*head)
	{
		*head = new;
		return;
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
}
void	print_list(t_stack *head)
{
	while (head)
	{
		printf("%d ->", head->content);
		head = head->next;
	}
	printf("\n");
}

