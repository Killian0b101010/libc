
/*Creation d'un block memoire qui me permet de manipuler un noeu je peux
changer son content son next le deplacer et le free independamment*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
