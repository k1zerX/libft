/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   avl_tree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 14:29:57 by kbatz             #+#    #+#             */
/*   Updated: 2019/09/12 00:09:52 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AVL_TREE_H
# define AVL_TREE_H

# include "libft.h"

typedef struct			s_avl_node
{
	void				*content;
	size_t				content_size;
	struct s_avl_node	*left;
	struct s_avl_node	*right;
	unsigned char		height;
}						t_avl_node;

typedef struct			s_avl_tree
{
	size_t				n;
	struct s_avl_node	*root;
	int					(*cmp)(t_avl_node *a, t_avl_node *b);
}						t_avl_tree;

t_avl_node			*balance(t_avl_node *node);
void				avl_insert(t_avl_tree *tree, t_avl_node *node);
t_avl_node			*avl_new_node(void *content, size_t content_size, char copy);
t_avl_tree			*avl_new_tree(int (*cmp)(t_avl_node *a, t_avl_node *b));

#endif
