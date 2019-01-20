/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_f.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbatz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 19:33:54 by kbatz             #+#    #+#             */
/*   Updated: 2019/01/20 17:56:35 by kbatz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     f_f(va_list ap, const char *restrict str, int len)
{
	double			a;
	unsigned char	*buf;
	int				p;

	a = va_arg(ap, double);
	buf = (unsigned char *)&a;
	p = ((buf[7] & 127) | (buf[6] >> 4)) - 63;
	//if (buf[7] & 128)
	//	write(1, "-", 1);
	printf("%d\n", p);
	return (0);
}
