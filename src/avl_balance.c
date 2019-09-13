/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_balance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 23:24:00 by kbatz             #+#    #+#             */
/*   Updated: 2019/09/11 23:51:16 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char			bfactor(t_avl_node *node)
{
	return (HEIGHT(node->right) - HEIGHT(node->left));
}

static void			fixheight(t_avl_node *node)
{
	unsigned char	hl;
	unsigned char	hr;

	hl = HEIGHT(node->left);
	hr = HEIGHT(node->right);
	node->height = (hl > hr) ? (hl) : (hr) + 1;
}

static t_avl_node	*rotl(t_avl_node *node)
{
	t_avl_node	*tmp;

	tmp = node->right;
	node->right = tmp->left;
	tmp->left = node;
	fixheight(node);
	fixheight(tmp);
	return (tmp);
}

static t_avl_node	*rotr(t_avl_node *node)
{
	t_avl_node	*tmp;

	tmp = node->left;
	node->left = tmp->right;
	tmp->right = node;
	fixheight(node);
	fixheight(tmp);
	return (tmp);
}

void	test_print(t_avl_node *node)
{
	printf("%s ", (char *)node->content);
}

t_avl_node			*avl_balance(t_avl_node *node)
{
	char	b;

//	printf("before\n");
//	printf("after\n");
//	printf("\t%s\n", (node) ? ((char *)node->content) : (NULL));
//	t_avl_tree *tmp_tree = avl_new_tree(NULL);
//	tmp_tree->root = node;
//	avl_bfs(tmp_tree, &test_print);
//	free(tmp_tree);
//	printf("\n");
	fixheight(node);
	if ((b = bfactor(node)) == 2)
	{
//		printf("rotl\n");
		if (bfactor(node->right) < 0)
			node->right = rotr(node->right);
		return (rotl(node));
	}
	else if (b == -2)
	{
//		printf("rotr\n");
		if (bfactor(node->left) > 0)
			node->right = rotl(node->left);
		return (rotr(node));
	}
	return (node);
}
