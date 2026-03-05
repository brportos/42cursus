#include <stdio.h>
#include <stdlib.h>
typedef struct	s_node
{
	void	*data;
	struct s_node	*next;
}t_node;

int	main()
{
	char	*a = "Hello";
	char	*b = "guys";
	t_node	*new = malloc(sizeof(t_node));

	new->data = a;
	new->next = malloc(sizeof(t_node));
	new->next->data = b;
	new->next->next = NULL;
	printf("%s\n", (char *)new->data);
	printf("%s\n", (char *)new->next->data);
}
