#include "push_swap.h"
#include <stdio.h>

t_stack  *ft_lstnew(int content);
void	ft_lstadd_back(t_stack **head, t_stack *new);
void	print_list(t_stack *head);
int main()
{
    t_stack	*a = NULL;
	t_stack	*b = NULL;
	t_stack *c = NULL;

	ft_lstadd_back(&a, ft_lstnew(42));
ft_lstadd_back(&a, ft_lstnew(17));
ft_lstadd_back(&a, ft_lstnew(93));
ft_lstadd_back(&a, ft_lstnew(5));
ft_lstadd_back(&a, ft_lstnew(68));
ft_lstadd_back(&a, ft_lstnew(24));
ft_lstadd_back(&a, ft_lstnew(81));
ft_lstadd_back(&a, ft_lstnew(10));
ft_lstadd_back(&a, ft_lstnew(57));
ft_lstadd_back(&a, ft_lstnew(36));
ft_lstadd_back(&a, ft_lstnew(74));
ft_lstadd_back(&a, ft_lstnew(2));
ft_lstadd_back(&a, ft_lstnew(99));
ft_lstadd_back(&a, ft_lstnew(45));
ft_lstadd_back(&a, ft_lstnew(61));
ft_lstadd_back(&a, ft_lstnew(13));
ft_lstadd_back(&a, ft_lstnew(88));
ft_lstadd_back(&a, ft_lstnew(29));
ft_lstadd_back(&a, ft_lstnew(70));
ft_lstadd_back(&a, ft_lstnew(6));
ft_lstadd_back(&a, ft_lstnew(54));
ft_lstadd_back(&a, ft_lstnew(31));
ft_lstadd_back(&a, ft_lstnew(97));
ft_lstadd_back(&a, ft_lstnew(20));
ft_lstadd_back(&a, ft_lstnew(76));
ft_lstadd_back(&a, ft_lstnew(11));
ft_lstadd_back(&a, ft_lstnew(64));
ft_lstadd_back(&a, ft_lstnew(38));
ft_lstadd_back(&a, ft_lstnew(83));
ft_lstadd_back(&a, ft_lstnew(14));
ft_lstadd_back(&a, ft_lstnew(50));
ft_lstadd_back(&a, ft_lstnew(27));
ft_lstadd_back(&a, ft_lstnew(91));
ft_lstadd_back(&a, ft_lstnew(3));
ft_lstadd_back(&a, ft_lstnew(72));
ft_lstadd_back(&a, ft_lstnew(41));
ft_lstadd_back(&a, ft_lstnew(8));
ft_lstadd_back(&a, ft_lstnew(60));
ft_lstadd_back(&a, ft_lstnew(34));
ft_lstadd_back(&a, ft_lstnew(79));
ft_lstadd_back(&a, ft_lstnew(16));
ft_lstadd_back(&a, ft_lstnew(95));
ft_lstadd_back(&a, ft_lstnew(22));
ft_lstadd_back(&a, ft_lstnew(66));
ft_lstadd_back(&a, ft_lstnew(48));
ft_lstadd_back(&a, ft_lstnew(1));
ft_lstadd_back(&a, ft_lstnew(85));
ft_lstadd_back(&a, ft_lstnew(39));
ft_lstadd_back(&a, ft_lstnew(73));
ft_lstadd_back(&a, ft_lstnew(12));
ft_lstadd_back(&a, ft_lstnew(58));
ft_lstadd_back(&a, ft_lstnew(26));
ft_lstadd_back(&a, ft_lstnew(90));
ft_lstadd_back(&a, ft_lstnew(4));
ft_lstadd_back(&a, ft_lstnew(63));
ft_lstadd_back(&a, ft_lstnew(37));
ft_lstadd_back(&a, ft_lstnew(82));
ft_lstadd_back(&a, ft_lstnew(19));
ft_lstadd_back(&a, ft_lstnew(55));
ft_lstadd_back(&a, ft_lstnew(71));
ft_lstadd_back(&a, ft_lstnew(7));
ft_lstadd_back(&a, ft_lstnew(96));
ft_lstadd_back(&a, ft_lstnew(30));
ft_lstadd_back(&a, ft_lstnew(65));
ft_lstadd_back(&a, ft_lstnew(47));
ft_lstadd_back(&a, ft_lstnew(89));
ft_lstadd_back(&a, ft_lstnew(21));
ft_lstadd_back(&a, ft_lstnew(59));
ft_lstadd_back(&a, ft_lstnew(33));
ft_lstadd_back(&a, ft_lstnew(78));
ft_lstadd_back(&a, ft_lstnew(15));
ft_lstadd_back(&a, ft_lstnew(94));
ft_lstadd_back(&a, ft_lstnew(28));
ft_lstadd_back(&a, ft_lstnew(62));
ft_lstadd_back(&a, ft_lstnew(40));
ft_lstadd_back(&a, ft_lstnew(86));
ft_lstadd_back(&a, ft_lstnew(18));
ft_lstadd_back(&a, ft_lstnew(52));
ft_lstadd_back(&a, ft_lstnew(69));
ft_lstadd_back(&a, ft_lstnew(9));
ft_lstadd_back(&a, ft_lstnew(98));
ft_lstadd_back(&a, ft_lstnew(32));
ft_lstadd_back(&a, ft_lstnew(67));
ft_lstadd_back(&a, ft_lstnew(44));
ft_lstadd_back(&a, ft_lstnew(87));
ft_lstadd_back(&a, ft_lstnew(23));
ft_lstadd_back(&a, ft_lstnew(56));
ft_lstadd_back(&a, ft_lstnew(35));
ft_lstadd_back(&a, ft_lstnew(80));
ft_lstadd_back(&a, ft_lstnew(25));
ft_lstadd_back(&a, ft_lstnew(92));
ft_lstadd_back(&a, ft_lstnew(43));
ft_lstadd_back(&a, ft_lstnew(77));
ft_lstadd_back(&a, ft_lstnew(49));
ft_lstadd_back(&a, ft_lstnew(84));
ft_lstadd_back(&a, ft_lstnew(46));
ft_lstadd_back(&a, ft_lstnew(53));
ft_lstadd_back(&a, ft_lstnew(75));
ft_lstadd_back(&a, ft_lstnew(51));

	ft_lstadd_back(&b, ft_lstnew(10));
	ft_lstadd_back(&b, ft_lstnew(20));
	ft_lstadd_back(&b, ft_lstnew(30));


    // print_list(a);
	// selection_sort(&a, &c);
	// print_list(a);
	printf("*******");
	print_list(a);
	chunk_sort(&a, &c);
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

