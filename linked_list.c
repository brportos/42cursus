#include <stdio.h>
#include <stdlib.h>
typedef struct	s_list
{
	void	*data;
	struct s_list	*next;
}t_list;

void    reveste_list(t_list **root);
t_list	*ft_lstnew(void *content);


int	main()
{
	char	*a = "Hello";
	char	*b = "guys";
	char    *c = "alpha";
	t_list	*new = malloc(sizeof(t_list));

	new->data = a;
	new->next = malloc(sizeof(t_list));
	new->next->data = b;
	new->next->next = malloc(sizeof * new);
	new->next->next->data = c;
	new->next->next->next = NULL;
	reveste_list(&new);
	printf("%s\n", (char *)new->data);
	printf("%s\n", (char *)new->next->data);
	printf("%s\n", (char *)new->next->next->data);
}

t_list  *ft_lstnew(void *content)
{
	t_list	*new_node = malloc(sizeof * new_node);
	if (!new_node)
		return (NULL);
	new_node->data = content;
	new_node->next = NULL;
	return (new_node);
}

void	reveste_list(t_list **root)
{
	t_list	*prev = NULL;
	t_list	*curr = *root;

	while (curr != NULL)
	{
		t_list	*next = curr->next;

		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*root = prev;
}
