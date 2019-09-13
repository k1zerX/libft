#include "libft.h"

static void		avl_infix(t_avl_node *node, void (*f)(t_avl_node *node))
{
	if (!node)
		return ;
	avl_rec_inf(node->left, f);
	(*f)(node);
	avl_rec_inf(node->right, f);
}
