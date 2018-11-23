/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ml.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 21:33:38 by kbatz             #+#    #+#             */
/*   Updated: 2018/11/24 00:24:05 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	t_list	*start;
	t_list	*tmp;
	int		i;

	if (ac > 1)
	{
		start = ft_lstnew(av[1], ft_strlen(av[1]));
		i = 2;
		while (i < ac)
		{
			tmp = ft_lstnew(av[i], ft_strlen(av[i]));
			ft_lstadd(&start, tmp);
			i++;
		}
	}
	tmp = start;
	while (tmp)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
}
