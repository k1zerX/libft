#include "libft.h"

static void		avl_rec_inf(t_avl_node *node, void (*f)(t_avl_node *node))
{
	if (!node)
		return ;
	avl_rec_inf(node->left, f);
	(*f)(node);
	avl_rec_inf(node->right, f);
}

void			avl_infix(t_avl_tree *tree, void (*f)(t_avl_node *node))
{
	avl_rec_inf(tree->root, f);
}
