/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_avl_rotr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 22:35:42 by kbatz             #+#    #+#             */
/*   Updated: 2019/09/11 23:22:02 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft"

void	ft_avl_rotr(t_avl_node *node)
{
	t_avl_node	*tmp;

	tmp = node->left;
	node->left = tmp->right;
	tmp->right = node;
	ft_fixheight(node);
	ft_fixheight(tmp);
}
