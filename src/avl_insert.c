/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_insert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:28:01 by kbatz             #+#    #+#             */
/*   Updated: 2019/09/11 23:43:22 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_avl_node	*avl_rec_ins(t_avl_node *tmp, t_avl_node *node, \
		int (*cmp)(t_avl_node *a, t_avl_node *b))
{
	if (!tmp)
		return (node);
	if ((*cmp)(node, tmp) < 0)
		tmp->left = avl_rec_ins(tmp->left, node, cmp);
	else
		tmp->right = avl_rec_ins(tmp->right, node, cmp);
//	printf("%p\t", (node->left) ? (node->left) : (NULL));
//	printf("%p\n", (node->right) ? (node->right) : (NULL));
//	return (avl_balance(tmp));
	return (tmp);
}

void				avl_insert(t_avl_tree *tree, t_avl_node *node)
{
/*	printf(" |  |  |  |  |  |  |  |  |  |  |  |\n");
	printf("\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\\-/\n");
	printf("insert-IN\n");
	printf("\n");*/
//	printf("vsavka %s:\n", (node) ? ((char *)node->content) : (NULL));
	tree->root = avl_rec_ins(tree->root, node, tree->cmp);
/*	printf("\n");
	printf("insert-OUT\n");
	printf("/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\/-\\\n");
	printf(" |  |  |  |  |  |  |  |  |  |  |  |\n");
	printf("------------------------------------\n");*/
}
