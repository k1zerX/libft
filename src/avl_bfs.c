#include "libft.h"

void	avl_bfs(t_avl_tree *tree, void (*f)(t_avl_node *node))
{
	t_queue		*queue;
	t_avl_node	*tmp;

	queue = ft_queue_new();
	ft_queue_push(queue, ft_new_elem(tree->root, sizeof(t_avl_node), 0));
	while (queue->len)
	{
		tmp = (t_avl_node *)ft_queue_pop(queue)->content;
		if (tmp->left)
			ft_queue_push(queue, ft_new_elem(tmp->left, sizeof(t_avl_node), 0));
		if (tmp->right)
			ft_queue_push(queue, ft_new_elem(tmp->right, sizeof(t_avl_node), 0));
		(*f)(tmp);
		free(tmp);
	}
}
