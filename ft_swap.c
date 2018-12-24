/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 18:52:56 by kbatz             #+#    #+#             */
/*   Updated: 2018/12/24 19:29:05 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *a, void *b, size_t size)
{
	while (size-- > 0)
	{
		*(unsigned char *)a ^= *(unsigned char *)b;
		*(unsigned char *)b ^= *(unsigned char *)a;
		*(unsigned char *)a++ ^= *(unsigned char *)b++;
	}
}
